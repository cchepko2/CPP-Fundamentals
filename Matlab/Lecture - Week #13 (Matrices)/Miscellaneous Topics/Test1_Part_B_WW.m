% Test #1 - Part B
%
% Put your name here: Wayne Wall
%
% Note: Problems will be scored just like homework is scored, using
%       the "Homework Mandatory Requirements" document.

%% Problem 1
%
% The formula for radioactive decay is:
%
% A = A0 * ( 1 / 2 ) ^ ( t / h)
%
% where:
%
% A0 is the orginal amount of the substance (at t = 0).
% A is the amount after time "t" has elapsed.
% h is the half life of the substance.
% t is the elapsed time.
%
% The half life of Carbon-14 is about 5730 years.  A sample contains
% 64 grams of Carbon-14 at time t = 0.  Write a MATLAB script that will
% produce a table showing the amount of Carbon-14 remaining every 1000
% years until 20000 years has elapsed.
%
% Choose an output format that shows the amount of Carbon-14 remaining
% to AT LEAST a hundredth of a gram.
%
% Use the "disp(...)" function to label your column headings "Years" and
% "Amount" respectively.  Optionally, you may use the "table(...)" function
% but, if you do, you must use it correctly.

clear; clc; close all; format

original_amount = 64;           % grams
half_life = 5730;               % years

Years = [ 0 : 1000 : 20000 ]';

Amount = original_amount * ( 1 / 2 ) .^ ( Years ./ half_life ); % grams

amount_table = [ Years, Amount ];

format shortG
disp('        Years       Amount');
disp(amount_table);
format




