% Programmer: Wayne Wall
% Description: Plots of free fall distance, velocity and acceleration.

%% Start with a clean slate

clear; clc; close all; format;

%% Compute free fall values over this time range.

time = [0 : .1 : 20];     % seconds

[dist, velocity, accel] = free_fall_func(time);

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