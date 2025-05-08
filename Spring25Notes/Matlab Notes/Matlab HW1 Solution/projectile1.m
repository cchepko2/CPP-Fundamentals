# Calculate projectile motion using kinimatic equations, both with kinimatics and
# a Euler simulation

%% Set up initial variables
clear; clc;

angle = 30;
velocity = 100;
gravity = 9.81;
time_total = 2*velocity*sind(angle)/gravity; total_flight time compunted from angle and velocity

%%
time = linspace(0, time_total, 100); % Set up time axis
x_vel = velocity*cosd(angle); % Compute x velocity
y_vel = velocity*sind(angle);  % Compute y velocity

x = time*x_vel; % Compute x distances
y = time*y_vel - 1/2*gravity*time.^2;   % Compute y distances

figure
plot(x,y);
title('Distance vs Height');
xlabel('X distance');
ylabel('Height');
grid on


%% Instead use a while loop to compute axis
x_dist = 0; % initial x_dist vector with inital value
y_dist = 0; % initial y_dist vector with inital value
time_t = 0; % initial time_t vector with inital value
time_step = 0.1;  % Keep time step higher for faster, but less accurate, computation times
x_vel = velocity*cosd(angle); % Split velocity into components
y_vel = velocity*sind(angle);
while y_dist >= 0 % While above the ground
  time_t(end+1) = time_t(end) + time_step;    % Compute next time and distances
  x_dist(end+1) = x_dist(end) + x_vel*time_step;
  y_dist(end+1) = y_dist(end) + y_vel*time_step;

  y_vel -= gravity*time_step;   % Compute change in y velocity based on acceleration of gravity
end

figure
plot(x_dist,y_dist);
title('Distance vs Height');
xlabel('X distance');
ylabel('Height');
grid on
