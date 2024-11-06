% Matrix Algebra - Linear Systems Demo
% Wayne Wall, CSCI-130

clear; clc; close all; format;

%% Consider this system of linear equations:
%
% -2 * x + y = 3
%      x + y = 10

%% Graphical solution.
%  Rearranging terms yields:
%
% y = 2 * x + 3;
% y = - x + 10;

x = [ 0 : .01 : 10 ];

y1 = 2 .* x + 3;
y2 = - x + 10;

hold on

plot(x,y1);
plot(x,y2);
title('Linear System');
xlabel('X');
ylabel('Y');
legend('y = 2 * x + 3', 'y = - x + 10');
grid on

hold off

%% Matrix solution.

% Matrix of (x,y) coefficients

coeff = [ -2, 1,
           1, 1 ];
       
% Column vector of right hand sides (RHS).

rhs = [ 3; 10 ];

% Now, A * X = B, where A = coeff matrix, B = rhs and X is the column
% vector of unknowns (in this case [ x; y ];  X = inv(A) * B.

unknowns = inv(coeff) * rhs;
unknowns

X = unknowns(1);
Y = unknowns(2);

X
Y

LHS_1 = -2 * X + Y;
LHS_2 = X + Y;

display_text = [ 'Equation #1 LHS = ', num2str(LHS_1) ];
disp(display_text)

display_text = [ 'Equation #2 LHS = ', num2str(LHS_2) ];
disp(display_text)

disp(' ')

%% Consider this system of linear equations.
%
% 5 * x + 3 * y -     z = 10;
% 3 * x + 2 * y +     z = 4;
% 4 * x -     y + 3 * z = 12;

% Matrix of (x, y, z) coefficients.

coeff = [ 5,  3, -1,
          3,  2,  1,
          4, -1,  3 ];
      
% Column vector of RHS values.

rhs = [ 10; 4; 12 ];

% Now, A * X = B, where A = coeff matrix, B = rhs and X is the column
% vector of unknowns (in this case [ x; y; z ];  X = inv(A) * B.

unknowns= inv(coeff) * rhs;
unknowns

       
X = unknowns(1);
Y = unknowns(2);
Z = unknowns(3);

X
Y
Z

LHS_1 = 5 * X + 3 * Y - Z;
LHS_2 = 3 * X + 2 * Y + Z;
LHS_3 = 4 * X - Y + 3 * Z;

display_text = [ 'Equation #1 LHS = ', num2str(LHS_1) ];
disp(display_text)

display_text = [ 'Equation #2 LHS = ', num2str(LHS_2) ];
disp(display_text)

display_text = [ 'Equation #3 LHS = ', num2str(LHS_3) ];
disp(display_text)

disp(' ')

%% Graphical solution.
%  Rearranging terms yields:
%
% z = 5 * x + 3 * y - 10;
% z = - 3 * x - 2 * y + 4;
% z = - 4/3 * x + 1/3 * y + 4;

[ x, y ] = meshgrid(-10 : .1 : 10);

z1 = 5 * x + 3 * y - 10;
z2 = - 3 * x - 2 * y + 4;
z3 = - 4/3 * x + 1/3 * y + 4;

figure( 'Position', [ 1100, 300, 800, 600 ], 'Name', '3D Linear Equations'); 

hold on;

plot3(x, y, z1, 'Color', 'cyan');
plot3(x, y, z2, 'Color', 'yellow');
plot3(x, y, z3, 'Color', 'green');

title('3D Linear System');
xlabel('X');
ylabel('Y');
zlabel('Z');

grid on;

% Put a "+" at the coordinate of the solution.

plot3(X,Y,Z, 'LineWidth', 2, 'Marker', '+', 'MarkerSize', 50, 'MarkerEdgeColor', 'black' );

hold off;


