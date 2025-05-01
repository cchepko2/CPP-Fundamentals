%% Start out with a clean slate

clear; clc;

%% MATLAB can handle imaginary numbers as well.

value = 25;

positive_root = sqrt(value)
negative_root = sqrt(-value)

positive_root_squared = positive_root ^ 2
negative_root_squared = negative_root ^ 2

%% MATLAB text strings are enclosed in single quote marks ('some text').
%  "disp(...)" function displays value verbatim.

disp('Mary had a little lamb,')
disp('it''s fleece was white as snow.')
disp('Everywhere that Mary went,')
disp('The lamb was sure to go.')

%disp(positive_root_squared)
positive_root_squared
disp(negative_root_squared)

%% messages and disp
messages = ["Mary had ", 1, " sheep dog too."]
disp(messages)