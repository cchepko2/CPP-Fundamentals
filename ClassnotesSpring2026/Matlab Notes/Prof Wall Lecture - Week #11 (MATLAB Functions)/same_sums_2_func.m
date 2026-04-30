function [is_magic, all_sums] = same_sums_2_func(matrix)
% same_sums_2_func(matrix)
%
% Returns is_magic = logical 1 if matrix rows, columns and diagonals have the same sum.
% Returns is_magic = logical 0 if not.
%
% If all the sums are the same, then returns the sum in all_sums.
% Otherwise, all_sums = 0.

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

is_magic = ( min(sum_all) == max(sum_all) );

if ( is_magic )
    all_sums = sum_cols(1);
else
    all_sums = 0;
end;

