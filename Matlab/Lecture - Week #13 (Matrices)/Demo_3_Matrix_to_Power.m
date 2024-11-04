% Matrix Algebra - Matrix to Power Demo
% Wayne Wall, CSCI-130

clear; clc; close all; format;

%% A matrix raised to a nth power is that matrix times itself "n" times.

matrix = [ 1, 2, 3
           4, 5, 6,
           7, 8, 9 ];
       
matrix       
       
matrix_times_matrix = matrix * matrix;
matrix_times_matrix

%% Also "matrix ^ n" should be equivalent.

matrix_to_power = matrix ^ 2;
matrix_to_power

%% Now to the 3rd power.

matrix_x_matrix_x_matrix = matrix * matrix * matrix;
matrix_x_matrix_x_matrix

matrix_to_3rd_power = matrix ^ 3;
matrix_to_3rd_power       
       