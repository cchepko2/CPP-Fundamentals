% Programmer: Corin Chepko
% Description: Plots of free fall distance, velocity and acceleration, including drag force.

%% Start with a clean slate

clear; clc; close all; format;

%% Compute free fall values over this time range.
gravity = -9.81;
time_inc = 0.1;
dist = 1000;
velocity = 0;
accel = gravity;
time= 0;
new_dist = 0;

while(new_dist >= 0 )
  [new_dist, new_velocity, new_accel] = free_fall_sim(time_inc, dist(end), velocity(end), accel(end));
  dist(end+1) = new_dist;
  velocity(end+1) = new_velocity;
  accel(end+1) = new_accel;
  time(end+1) = time(end) + time_inc;
end


%% Plot distance vs time.

figure

plot(time, dist);
title('Free Fall Distance');
xlabel('Time (seconds)');
ylabel('Distance (meters)');
grid on

%% Plot velocity vs time.

figure

plot(time, velocity);
title('Free Fall Velocity');
xlabel('Time (seconds)');
ylabel('Velocity (meters/sec)');
grid on

%% Plot acceleration vs time.

figure

plot(time, accel);
title('Free Fall Acceleration');
xlabel('Time (seconds)');
ylabel('Acceleration (meters/sec^2)');
grid on

final_velocity = new_velocity*2.23694
