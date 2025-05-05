% Projectile motion using kinimatic and euler solutions

%% Define variables
clear; clc;

mass = 5;
radius = .037;
area = 0.25;%pi*radius^2;
air_density = 1.225;
drag_coeff = 0.47;
gravity = 9.81;
time_step = 0.01;

x0_init = 0;
y0_init = 0;

velocity = 29;
angle = 64;
time = 0;

time_axis = 0;
time_axis_euler = 0;
x = x0_init;
y = y0_init;
x_euler = x0_init;
y_euler = y0_init;

x_vel_init = velocity*cosd(angle);
y_vel_init = velocity*sind(angle);
x_vel = velocity*cosd(angle);
y_vel = velocity*sind(angle);

while y(end) >= 0 || y_euler(end) >= 0
  % Kinimatic solution
    time = time + time_step;
    % calculate positions using kinimatic formulas
    time_axis(end+1) = time;
    x(end+1) = x0_init + x_vel_init*time;
    y(end+1) = y0_init + y_vel_init*time - 1/2*gravity*time^2;

  % Calculate using Euler simulation
    % recalulte total velocity
  if(y_euler(end) >= 0)
    time_axis_euler(end+1) = time;
    velocity = sqrt(x_vel^2+y_vel^2);
    % Calculate air resistance accel = F_air/mass
    accel_air = -1/2 * air_density * velocity^2 * drag_coeff * area/mass;

    % Calulate new velocity based on acceleration change
    x_vel += accel_air*x_vel/velocity * time_step;
    y_vel += accel_air*y_vel/velocity * time_step - gravity * time_step;

    % Update new positions using new velocities
    x_euler(end+1) = x_euler(end) + x_vel*time_step;
    y_euler(end+1) = y_euler(end) + y_vel*time_step;
  end
end

plot(x,y,"r")
hold on
%figure
plot(x_euler, y_euler, "g")


















