% CSV reading and plotting

clear; clc; close all; format bank;

% For Octave
% Read csv using csvread(filename, beginning row, beginning column)
data_table = csvread('data.csv.txt', 1, 0);

figure
angles = data_table(:, 1);
velocities = data_table(:, 2);
plot(angles, velocities)

% For Matlab
data_table2 = readmatrix('data.csv.txt');
data_table3 = readtable('data.csv.txt');

figure
angles2 = data_table3.Angle;
velocities2 = data_table3.Dist30m
plot(angles2, velocities2)

save('out_data.mat', 'angles', 'velocities')
