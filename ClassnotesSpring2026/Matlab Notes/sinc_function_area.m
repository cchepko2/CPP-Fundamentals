clear; clc; close all;

x = linspace(-100*pi, 100*pi, 1000);
y = sinc(x);
y1 = sin(x)./x;

hold on
%plot(x, y)
area(x, y)

area(x, y1)
hold off

area = trapz(x, y)
area2 = trapz(x, y1)

% Homework problem: integral from 0-5 of x*e^(-x/3)dx, compute using trapz
% and quad, check with analytical solution: -24e^(-5/3) + 9

x2 = linspace(0, 5, 10);
y2 = x2.*exp(-x2/3);

func = @(z) z.*exp(-z/3);

area2_trap = trapz(x2, y2)
area2_quad = quad(func, 0, 5)
area2_integral = integral(func, 0, 5)

area_analyical = -24*exp(-5/3) + 9