% Wayne Wall's solution to Problem 3.17
% Statistical analysis of a list of grades.

clear; clc;

%% Create row vector holding grades

grades = [ 68, 83, 61, 70, 75, 82, 57, 5, 76, 85, 62, ...
           71, 96, 78, 76, 68, 72, 75, 83, 93 ];

%% Calculate statistics

grades_mean = mean(grades);
grades_median = median(grades);
grades_mode = mode(grades);
grades_std = std(grades);

grades_mean
grades_median
grades_mode
grades_std

%% Sort grades and display sorted list

grades_sorted = sort(grades);
grades_sorted
