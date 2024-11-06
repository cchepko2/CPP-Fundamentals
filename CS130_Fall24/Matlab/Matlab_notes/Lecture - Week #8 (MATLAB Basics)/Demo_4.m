%% Start with a clean slate.

clear; clc

%% MATLAB supports one-dimensional arrays.  They are called vectors.
%  A variable can be initialized to a row vector (horizontal array) by
%  enclosing its elements in square brackets ("[]").

My_row_vector = [ 12, 15, 62, -28, 17 ];
My_row_vector

%% A variable can be initialized to a column vector (vertical array) in several ways.

My_col_vector = [ 1; 4; 9; 16; 25; 36 ];
My_col_vector

% or, alternatively:

My_col_vector = [
    1
    4
    9
    16
    25
    36
 ];

My_col_vector

%% The "transpose" of a row vector is a column vector containing the same values.

My_row_vector
My_row_vector_transpose_1 = transpose(My_row_vector)
My_row_vector_transpose_2 = My_row_vector'

%% The "transpose" of a column vector is a row vector containing the same values.

My_col_vector
My_col_vector_transpose_1 = transpose(My_col_vector)
My_col_vector_transpose_2 = My_col_vector'

%% Element-by-element arithmetic can be done on vectors.

My_row_vector_times_two = My_row_vector * 2

disp('Square root of My_col_vector = ')
disp( sqrt(My_col_vector) );

%% If two row vectors have the same number of elements, element-by-element
%  arithmetic can be done between them.

A = [ 1, 2, 3, 4, 5 ];
B = [ 5, 4, 3, 2, 1 ];

sum = A + B

%% If two column vectors have the same number of elements, element-by-element
%  arithmetic can be done between them.

A = [ 6; 7; 8; 9 ]
B = [
    9
    8
    7
    6
 ]

sum = A + B

A = A' % transpose from column to row vector
B
sum = A+B
