function output = hypot_func(a, b)
% hypot_func(a, b)
%
% Returns the hypotenuse of a right triangle with sides "a" and "b".

% Wayne Wall, February 2019.

%% Use Pythagorean formula for each element of "a" and "b".

output = sqrt( a .^ 2 + b .^ 2 );