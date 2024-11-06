%% Programmer: Wayne Wall
%  Description: Kinetic Energy function demo.
%
% Follow these steps:
%
% 1. Create from scratch a separate function script file implementing a
%    function which is passed in the mass and velocity of a particle and
%    returns its kinetic energy.  (Mathematically, KE = 0.5 * mass * velocity ^ 2.)
%    Name your function something meaningful and include appropriate Help
%    information.
%
% 2. In the space below, implement a main script that uses the function to
%    accomplish the following:
%
%    For a mass of 5 grams, calculate the kinetic energy for velocities
%    of 0 to 1000 meters/sec (in steps of 5 meters/sec), create a line
%    graph of the kinetic energy verses the velocity.  The line should be
%    solid and black in color.
%
%    On the SAME set of axes, plot the kinetic energy of a mass of 10 grams
%    for the same velocities.  This line should be dashed and blue in
%    color.  The graph should have grid lines enabled and an appropriate
%    legend.

%% Start with a clean slate.

clear; clc; close all; format;

%% Independent variables

mass_1 = 5;          % grams
mass_2 = 10;         % grams

velocities = [ 0 : 5 : 1000 ];      % meters/sec

%% Compute kinetic energy of each mass at each velocity.

kinetic_energy_1 = kinetic_energy_func(mass_1, velocities); % gram (meters/sec)^2
kinetic_energy_2 = kinetic_energy_func(mass_2, velocities); % gram (meters/sec)^2

%% Plot the kinetic energy of mass_1 at each velocity.

plot(velocities, kinetic_energy_1, 'LineStyle', '-', 'Color', 'black');
title('Kinetic Energy vs Velocity');
xlabel('Velocity [m/sec]');
ylabel('Kinetic Energy [gram (m/sec)^2]');
grid on

hold on

plot(velocities, kinetic_energy_2, 'LineStyle', '--', 'Color', 'blue');

legend_text_1 = [ num2str(mass_1), ' grams' ];
legend_text_2 = [ num2str(mass_2), ' grams' ];

legend(legend_text_1, legend_text_2);

hold off

