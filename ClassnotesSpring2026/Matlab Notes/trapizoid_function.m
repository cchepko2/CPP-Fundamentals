% Trapazoid Integration

clear; clc; close all;

x = 0:pi/5:5*pi;
y = x .* cos(x);
plot(x, y)
area(x, y)

trapz(x, y)

class_trapz(x, y)

function area = class_trapz(x, y)
    area = 0;
    width = x(2)-x(1);
    for index = 1:length(y)-1
        area = area + width/2*(y(index)+y(index+1));
    end
end