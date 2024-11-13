function [dist, velocity, accel, accel2] = free_fall_func(time)
  %accel = 9.81; accel, even though a constant, in order
  % to plot vs time needs to be a vector
  gravity = -9.81;

  drag_coeff = 0.47;
  area = .75^2; % square meters of area of spherical skydiver
  air_d = 1.225;
  mass = 50;

  % free_fall(time)
  %
  % Returns a three element row vector [ distance, velocity, acceleration ]
  % holding the values at time "t" of an object in free fall.

  dist = (1/2) * gravity .* (time .^ 2);
  velocity = gravity.*time;  % meters/sec

  % Acceleration is a constant, but we need to return a vector if a vector
  % is passed into this function.
  accel = gravity * ones(1, numel(time)); % 9.81 * vector of 1's numel in size
  %acceleration = g * ones(1, numel(t));   % meters/sec^2

  Drag = drag_coeff*air_d*area/(2*mass)*velocity.^2;

  %If drag acceleration exceeds gravity, set equal to gravity, but positive
  for i = 1:numel(Drag)
    if(gravity+Drag(i) > 0)
      Drag(i) = -1*gravity;
    end
  end

  accel2 = (gravity+Drag);
  accel = accel+Drag;


end
