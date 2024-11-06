% Programmer : Wayne Wall
% Description : Solve a set of simultaneous linear equations.

%% Start with a clean slate

clear; clc; close all; format;

%% You're given the following system of simultaneous linear equations:
%
%  3 * x +  4 * y -  5 * z +  2 * w = -6
%  7 * x -  8 * y +  9 * z +  6 * w = 96
% 11 * x + 12 * y + 13 * z + 10 * w = 312
% 15 * x + 16 * y + 17 * z + 14 * w = 416

% Matrix of (x, y, z, w) coefficients.

coeff = [ 3, 4, -5, 2 
          7, -8, 9, 6
         11, 12, 13, 10
         15, 16, 17, 14 ];
      
% Column vector of RHS values.

rhs = [-6; 96; 312; 416];

%% Solve using matrix algebra.

% Now, A * X = B, where A = coeff matrix, B = rhs and X is the column
% vector of unknowns (in this case [ x; y; z; w ].
% Solving for the unknowns yields: X = inv(A) * B.

Solution = inv(coeff) * rhs;

X = Solution(1)
Y = Solution(2)
Z = Solution(3)
W = Solution(4)
       
%% Use the solution values to evaluate the LHS of the equations (A * X) = B
%  and display the result.  If everything is correct, these values should
%  equal the RHS values (B).

LHS = coeff * Solution;

disp('Substituting solution values into original equations yields:');
LHS