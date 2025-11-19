clc; clear; close all;

angle = input("Enter an angle in degrees: ")

time_in_air = 14;

time = linspace(0, time_in_air, 100);
x_vel = 30;
y_vel = 30;


x_dist = x_vel*time;
y_dist = y_vel*time;

figure %The next plot will in a new figure
hold on  % Keep the plot open and put next plot in same figure

plot(x_dist, y_dist)

slope = sind(angle);
y_dist = slope*y_vel*time;

%figure %The next plot will in a new figure
plot(x_dist, y_dist)

title("Plots of a lines at 45 degrees and 30 degrees")

xlabel("x_dist")
ylabel("y_dist")

legend_str = sprintf("%.1f degrees", angle) % loop up format specifiers for more info on %f %.1f (1 decimal place) etc...
legend("45 degrees", legend_str)

hold off
