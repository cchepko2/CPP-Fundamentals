function output = same_sums_func(matrix)
% same_sums_func(matrix)
%
% Returns logical 1 if matrix rows, columns and diagonals have the same sum.
% Returns logical 0 if not.

% Author: Wayne Wall, February 2019.

%% Calculate row vector containing sum of all the columns.

sum_cols = sum(matrix);

%% Calculate row vector containing sum of all the rows.

sum_rows = sum(matrix');

%% Calculate the sum of each principal diagonal.

sum_diag1 = sum(diag(matrix));
sum_diag2 = sum(diag(fliplr(matrix)));

%% Combine the sums into a single row vector.

sum_all = [ sum_rows, sum_cols, sum_diag1, sum_diag2 ];

%% Return result.
%  min(sum_all) and max(sum_all) will be equal ONLY when all the elements are the same.

output = ( min(sum_all) == max(sum_all) );

