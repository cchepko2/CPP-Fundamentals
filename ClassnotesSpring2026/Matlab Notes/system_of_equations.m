% System of equations
% x + y + z = 6
% 2y + 5z = -4
% 2x + 5y -z = 27
% solution = (5, 3, -2)

clear; clc; close all; format bank;

A = [1 1 1; 0 2 5; 2 5 -1];
B = [6; -4; 27];

unknowns1 = inv(A)*B;
unknowns2 = A\B;

disp(unknowns1)
disp(unknowns2)

[x, y] = meshgrid(-10:0.1:10);
%x = -10:0.1:10;
%y = -10:0.1:10;

eq1_z = 6 - x - y;
eq2_z = (-4 -2*y)/5;
eq3_z = -(27 - 2*x - 5*y);

hold on;
%plot3(x, y, eq1_z, 'Color', 'blue')
surf(x, y, eq1_z, 'EdgeColor','blue')
surf(x, y, eq2_z, EdgeColor="green")
surf(x, y, eq3_z, EdgeColor="yellow")
hold off;