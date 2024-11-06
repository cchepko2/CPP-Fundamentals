% Programmer : Wayne Wall
% Description : Solve a set of simultaneous linear equations.

%% Start with a clean slate

clear; clc; close all; format;

%% You're given the following system of simultaneous linear equations:
%
%     x + 2 * y - 3 * z + 4 * w = 12;
% 2 * x + 2 * y - 2 * z + 3 * w = 10;
%             y +     z         = -1;
%     x -     y +     z - 2 * w = -4;

% Matrix of (x, y, z, w) coefficients.

coeff = [ 1, 2, -3, 4,
          2, 2, -2, 3,
          0, 1,  1, 0,
          1, -1, 1, -2 ];
      
% Column vector of RHS values.

rhs = [ 12; 10; -1; -4 ];

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