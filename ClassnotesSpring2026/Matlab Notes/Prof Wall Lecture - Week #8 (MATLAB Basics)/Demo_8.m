%% Start with a clean slate

clear; clc; close all;

%% Consider this row_vector

row_vector =  1 : 1 : 10

%% The fliplr(...) function takes a row vector as input and flips the elements
%  left to right which results in them being reversed.

row_vector_fliplr = fliplr(row_vector)

%% Here's a 3 x 4 matrix

My_matrix = [
    [ 20, 14, -3, 17 ]
    [  4, -2, 18, 21 ]
    [ 12, 11,  6, -5 ]
 ];

My_matrix

%% The transpose

My_matrix_transpose = My_matrix';
My_matrix_transpose

%% The "fliplr(...)" function is passed a matrix and returns a matrix with
%  the values in each row flipped (i.e., reversed).

My_matrix_flipr = fliplr(My_matrix)

My_matrix_transpose_fliplr = fliplr(My_matrix_transpose)
