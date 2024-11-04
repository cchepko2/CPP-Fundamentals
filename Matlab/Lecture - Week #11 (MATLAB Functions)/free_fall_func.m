function [distance, velocity, acceleration] = free_fall_func(t)
% free_fall(t)
%
% Returns a three element row vector [ distance, velocity, acceleration ]
% holding the values at time "t" of an object in free fall.

g = 9.8;        % meters/sec^2 Acceleration due to gravity.

distance = ( 1/2 ) * g .* (t .^ 2);     % meters

velocity = g .* t;                      % meters/sec

% Acceleration is a constant, but we need to return a vector if a vector
% is passed into this function.

acceleration = g * ones(1, numel(t));   % meters/sec^2

end
