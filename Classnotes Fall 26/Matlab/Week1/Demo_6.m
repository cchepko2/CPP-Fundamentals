%% Start with a clean slate

clear; clc;

%% A row vector can be initialized with a linear progression of values.

xValues = 1 : 1 : 10;     % First element = 0, each subsequent element is one
                           % greater, until last element is reached.
xValues

xValues2 = linspace(0, 100, 10)

yValues = sqrt(xValues);

C = power(xValues, 2)
C2 = xValues.^2

xValues.*yValues

%% The plot(..., ...) function plots the first vector along the horizontal
%  axis and the second vector along the vertical axis.

plot(xValues, yValues, 'r--');

%% A call to title(...) adds a title to the plot.

title('Plot of y = sqrt(x)');

%% A call to xlabel(...) adds a horizontal axis label.

xlabel('X-Axis');

%% A call to ylabel(...) adds a vertical axis label.

ylabel('Y-Axis');

%% The grid('on') statement displays a grid of overlay lines.

grid('on');
