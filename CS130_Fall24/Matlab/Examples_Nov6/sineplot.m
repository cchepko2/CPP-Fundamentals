clear; clc;

degrees_scale = input("Enter the scale of the x-axis in degrees");

% linearly spaced array in integer sizes
%degrees_axis_int = 0:1:degrees_scale
degrees_axis_double = linspace(0, degrees_scale, 100);

y_axis = sind(degrees_axis_double);

plot(degrees_axis_double, y_axis)

title('Height vs Time');
xlabel('Time (seconds)');
ylabel('Height (meters)');
grid('on');
