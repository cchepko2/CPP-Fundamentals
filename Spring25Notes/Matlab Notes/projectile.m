clc; clear;

angle = 30;
v0 = 100;
gravity = 9.81;

total_time = v0*sind(angle) * 2/gravity

time = linspace(0, total_time, 100);

% If doing an element by element operation and not trying to multiple a
% matrix by itself, use the '.' before the operator

% Calculate time squared
time_sq = time.^2;

height = v0*sind(angle)*time - 1/2 * gravity * time_sq;

plot(time, height);