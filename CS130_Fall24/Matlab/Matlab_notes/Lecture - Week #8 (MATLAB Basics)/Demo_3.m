%% Start out with a clean slate
a=1; b=2;  % dead code, the clear erases this
clear; clc;

a=1; b=2;
%% MATLAB can handle imaginary numbers as well.

value = 25;

positive_root = sqrt(value)
negative_root = sqrt(-value)

positive_root_squared = positive_root ^ 2
negative_root_squared = negative_root ^ 2

%% MATLAB text strings are enclosed in single quote marks ('some text').
%  "disp(...)" function displays value verbatim.

disp("\tMary had a little lamb\n,\"")
disp('it''s fleece was white as snow.')
disp('Everywhere that Mary went,')
disp('The lamb was sure to go.')

disp(positive_root_squared)
disp(negative_root_squared)