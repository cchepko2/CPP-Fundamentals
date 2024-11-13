clear;
clc;

gravity = 9.81

feet_meters = input("What units to use (f, m): ", 's');
feet_meters
if( feet_meters(1) == 'f' )
  gravity = 32.2;
else
  gravity = 9.81;
end

gravity

% linspace times from 0 to flight_time (s), with 1000 increments
flight_time = 14.2
time = 0:1:100
time_axis = linspace(0,flight_time,1000);

height = sind(45)*100*time_axis - gravity/2*(time_axis.^2);

plot(time_axis, height)


%for x^y, only square matrix arguments are permitted and one argument must be scalar.
%  Use .^ for elementwise power.
