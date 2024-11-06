% Wayne Wall's solution to Problem3.10
% Compute a table of sine, cosine and tangent values.

clear; clc;

%% Row vector of angles from 0 to 2*pi in steps of 0.1 radians.

angles_in_radians = 0 : 0.1 : 2 * pi;

%% Compute sines, cosines and tangents of these angles

sines = sin(angles_in_radians);
cosines = cos(angles_in_radians);
tangents = tan(angles_in_radians);

%% Create a "table" matrix.
%  First column contains the angles.
%  Subsequent columns contain the sine, cosine and tangent values.

angle_in_radians_vs_sine_cosine_tangent = ...
    [ angles_in_radians' sines' cosines' tangents' ];

angle_in_radians_vs_sine_cosine_tangent
