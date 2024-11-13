function [distance, velocity, acceleration, accel2] = free_fall_func(t)
% free_fall(t)
%
% Returns a three element row vector [ distance, velocity, acceleration ]
% holding the values at time "t" of an object in free fall.

g = 9.8;        % meters/sec^2 Acceleration due to gravity.
mass = 50;





% Acceleration is a constant, but we need to return a vector if a vector
% is passed into this function.

acceleration = g * ones(1, numel(t));   % meters/sec^2

gravity = 9.81;

drag_coeff = 0.47;
area = .75^2; % square meters of area of spherical skydiver
air_d = 1.225;
velocity = acceleration .* t;
W = gravity*mass;
Drag = drag_coeff*air_d*area/2*velocity.^2;
acceleration = (W-Drag)/mass
if(acceleration <= 0)
  acceleration = 0;
end

velocity = acceleration .* t;                      % meters/sec
distance = ( 1/2 ) * acceleration .* (t .^ 2);     % meters
end
