% Programmer: Corin Chepko
% Description: Plots of free fall height, velocity and acceleration
% including force of air resistance.

%% Start with a clean slate

clear; clc; close all; format;

%% Compute free fall values over this time range.
% set initial conditions
gravity = -9.81;
time_inc = 10^-3;
drag_coeff = 0.47;
area = .75^2; % square meters of area of spherical skydiver
dist = 0;
velocity = 1000;
accel = gravity;
time= 0;

% Start simulation
new_dist = 0;
while(new_dist >= 0 )

  if( new_dist < 275 && sign(velocity(end)) < 0)
    area = 22.3;
    drag_coeff = 1;
  end

  [new_dist, new_velocity, new_accel] = free_fall_sim(time_inc, dist(end), velocity(end), accel(end), area, drag_coeff);
  dist(end+1) = new_dist;
  velocity(end+1) = new_velocity;
  accel(end+1) = new_accel;
  time(end+1) = time(end) + time_inc;
end


%% Plot distance vs time.

figure

%hold on

plot(time, dist);
title('Free Fall Height');
xlabel('Time (seconds)');
ylabel('Height (meters)');
grid on

%% Plot velocity vs time.

figure

% convert velocities from m/s to mph
velocity = velocity*2.23694;

plot(time, velocity);
title('Free Fall Velocity');
xlabel('Time (seconds)');
ylabel('Velocity (mph)');
grid on

%% Plot acceleration vs time.

figure

% convert accel from m/s^2 to gravities
accel = accel / abs(gravity);
plot(time, accel);
title('Free Fall Acceleration');
xlabel('Time (seconds)');
ylabel('Acceleration (Gs)');
grid on
