%% Start with a clean slate

clear; clc;

%% A row vector can be initialized with a linear progression of values.

xValues = 0 : 1 : 100;     % First element = 0, each subsequent element is one
                           % greater, until last element is reached.
                    
yValues = sqrt(xValues);

%% The plot(..., ...) function plots the first vector along the horizontal
%  axis and the second vector along the vertical axis.

plot(xValues, yValues);
  
%% A call to title(...) adds a title to the plot.

title('Plot of y = sqrt(x)');

%% A call to xlabel(...) adds a horizontal axis label.

xlabel('X-Axis');

%% A call to ylabel(...) adds a vertical axis label.

ylabel('Y-Axis');

%% The grid('on') statement displays a grid of overlay lines.

grid('on');
