clear;
clc;

gravity = 9.81

feet_meters = input("What units to use (\"f\", \"m\"): ");
feet_meters
if( feet_meters == "f" )
  gravity = 32.2;
else
  gravity = 9.81;
end

gravity


time_axis = linspace(0,20)

v_axis = sind(45)*100*time_axis - gravity/2*(time_axis.^2);

plot(time_axis, v_axis)

%for x^y, only square matrix arguments are permitted and one argument must be scalar.
%  Use .^ for elementwise power.
