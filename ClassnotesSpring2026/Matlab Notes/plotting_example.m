clear; clc; close all;

x = -5*pi:pi/5:5*pi;
y = x;

z = 2*sin(x) - cos(y);
figure
plot3(x, y, z)

[meshx, meshy] = meshgrid(x);

figure
z = make_surface(meshx, meshy);
plot3(meshx, meshy, z)

figure
surf(x, y, z)

function z = make_surface(x, y)
    z = 2*sin(x) - cos(y);
end