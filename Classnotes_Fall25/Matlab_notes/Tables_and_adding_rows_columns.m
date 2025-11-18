clc; clear; close all; format;

% Create 10 elements evenly spaced
N = [1:1:10]  % Elements from 1-10 using a step size of 1
N = linspace(1,10,10) % 10 elements from 1-10
M = linspace(10, 1, 10) % 10 elements from 10-1

% N*N cannot multiply two row vectors
elementwise = N.*N % elementwise operation, so returns a row with each corrosponding elements
  % multiplied

dot_product = N*N' % This is a dot product, a row times a columns

multiplication_table = N'*N  % This creates a table, with each element multiplied by every other element

multiplication_table2 = N'*M  % This creates a table, with each element multiplied by every other element

%%  Adding columns and rows
x = linspace(1,10,10)
angles = linspace(5,85,10)
% Add a row to a vector
table = [1, 2, 3; 2, 3, 4; 5, 6, 7]
% Add a column to a table
new_col = [9, 9, 9]
mod_table = [new_col', table]  % Need to transpose the vector new_col into a column

table2 = [angles; multiplication_table2] % Creates a new table, with angles as the first row

velocities = linspace(0, 50, 10)
velocities = [0, velocities]
table3 = [velocities', table2]

