%% Start out with clean slate

clear; clc; close all;      % "close all" closes and plot windows

%% Create a column vector containing angles from 0 to 360 degress,
%  in increments of 5 degrees.

angles = transpose(0 : 5 : 360);

%% Create a column vector of the sine of those angles.

sine_of_angles = sind(angles);

%% Create a matrix (i.e., a table) with the first column containing the angles and the
%  second column containing the sine of the angles.

table = [ angles, sine_of_angles ];

%% Display column heading text

disp('    Angle      Sine');

%% Display the table matrix

disp(table);

%% Create a plot of Sine vs. Angle with title, labels and grid lines.

plot(angles, sine_of_angles);

title('Sine vs. Angle');
xlabel('Angle (degrees)');
ylabel('Sine(Angle)');
grid('on');