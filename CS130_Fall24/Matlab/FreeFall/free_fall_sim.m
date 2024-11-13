function [new_dist, new_velocity, new_accel] = free_fall_sim(time_inc, dist, velocity, accel)
  %accel = 9.81; accel, even though a constant, in order
  % to plot vs time needs to be a vector

  gravity = -9.81;
  drag_coeff = 0.47;
  area = .75^2; % square meters of area of spherical skydiver
  air_d = 1.225;
  mass = 50;

  Drag = -1*sign(velocity)*drag_coeff*air_d*area/(2*mass)*velocity^2;
  %if(Drag+gravity > 0)
  %  Drag = -1*gravity;
  %end
  new_accel = gravity+Drag;
  new_velocity = velocity + new_accel*time_inc;
  new_dist = dist+new_velocity*time_inc;

end
