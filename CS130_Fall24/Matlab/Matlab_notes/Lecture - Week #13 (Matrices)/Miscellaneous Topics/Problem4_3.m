% Wayne Wall's solution to Problem 4.3
% Find time of min and max thermocouple temperature readings.

clear; clc;

%% Part (a) - Create a column vector (in two hour increments)

time = transpose(0 : 2 : 24);

%% Part (b) - Load the thermocouple data (into the variable 'thermocouple_temps'

load( 'thermocouple.mat' );

%% Part (c) - Create temperature data matrix with "time" column first.

time_vs_temperature_data = [ time, thermocouple_temps ]

% or
 
%time_vs_temperature_data = horzcat( time, thermocouple_temps )

%% Part (d) - Determine the indices where the min and max temps occur
%  for each thermocouple

[ max_temp, max_index ] = max( time_vs_temperature_data(:,2:end) );

[ min_temp, min_index ] = min( time_vs_temperature_data(:,2:end) );

% Display the times where the min and max temps occur.

disp('Time (in hours) when max temps occured = ');

max_times = [ time(max_index(1)), time(max_index(2)), time(max_index(3)) ];
disp(max_times);

disp('Time (in hours) when min temps occured = ');

min_times = [ time(min_index(1)), time(min_index(2)), time(min_index(3)) ];
disp(min_times);


