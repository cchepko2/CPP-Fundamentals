% Author: Corin Chepko
% Date: 11/6/24
% Program info: Calculates the height of a projectile vs time.
% Inputs muzzle velocity and angle in degrees

gravity = 9.81;

velocity = input("Enter muzzle veocity in m/s: ");
angle = input("Enter angle in degrees: ");

velocity
vertical_velocity = sind(angle)*velocity

flight_time = vertical_velocity*2/gravity

t_axis = linspace(0,flight_time,100);
height_axis = vertical_velocity*t_axis - gravity/2*(t_axis.^2);

plot(t_axis, height_axis)

title('Height vs Time');
xlabel('Time (seconds)');
ylabel('Height (meters)');
grid('on');
