% Programmer : Wayne Wall
% Description : Prompt user for a square matrix.  Invert matrix, if possible.

%% Start with a clean slate

clear; clc; close all; format;

%% Prompt user to enter a square matrix

input_matrix = input('Enter a square matrix (enclosed in [ ]): ');

disp('The matrix entered = ');
disp (input_matrix);

dimensions = size(input_matrix);

if ( min(dimensions) ~= max(dimensions) )

    disp('Matrix is not square!');
    return
    
end 

%% Check if matrix is invertable

det_matrix = det(input_matrix);

if ( abs(det_matrix) > 0.001 )
    
    inverse_matrix = inv(input_matrix);
    
    disp('Inverse = '); 
    disp(inverse_matrix);
 
else
    
    disp('Matrix is NOT invertible.');
    
end
