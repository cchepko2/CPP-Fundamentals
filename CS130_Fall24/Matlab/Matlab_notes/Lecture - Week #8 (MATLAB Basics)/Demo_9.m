%% Start with a clean slate

clear; clc; close all;

%% Have MATLAB generate a magic square by calling the "magic(...)" function.

matrix_dim = 3;

square_matrix = magic(matrix_dim);

% Swap the first and last elements of the first row.

% temp = square_matrix(1,1);
% square_matrix(1,1) = square_matrix(1,end);
% square_matrix(1,end) = temp;

square_matrix

%% Call a custom function which returns a "true" (logical 1) if the sums
%  of all the rows, columns and diagonals all equal the same value.

if ( same_sums_func(square_matrix) )
    disp('All sums are equal to the same value.');
    disp('This matrix is a magic square.');
else
    disp('All sums are NOT equal to the same value.');
    disp('This matrix is NOT a magic square.');
end
