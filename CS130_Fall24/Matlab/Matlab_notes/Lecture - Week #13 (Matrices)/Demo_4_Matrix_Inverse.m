% Matrix Algebra - Matrix Inverse Demo
% Wayne Wall, CSCI-130

clear; clc; close all; format;

%% The Identiy matrix is a square matrix with all ones along the primary diagonal
%  and zeros elsewhere.

Identity_1 = eye(1);
Identity_2 = eye(2);
Identity_3 = eye(3);
Identity_7 = eye(7);

Identity_1
Identity_2
Identity_3
Identity_7

%% Multiplying the Identity matrix times a matrix yeilds the original matrix.

identity = eye(4);
identity

matrix = [ 16, -2,  3, 13,
            5, 11, 10,  8,
            9,  7, -6, 12,
            4, 14, 15, -1 ];
matrix        
        
identity_times_matrix = identity * matrix;
identity_times_matrix

%% Multiplying the matrix times the identity matrix yields the original matrix.

matrix_times_identity = matrix * identity;
matrix_times_identity

%% Inverse of a matrix.
% The inverse of a (square) matrix is the matrix when multiplied by the
% original matrix results in the Identity matrix.
% In other words (inverse_of_matrix) * (matrix) = Identity_matrix.

matrix = [ 8, 1, 6,
           3, 5, 7,
           4, 9, 2 ];

matrix       
       
inverse_matrix = inv(matrix);
inverse_matrix

det_matrix = det(matrix);
det_matrix

inverse_times_original = inverse_matrix * matrix;
inverse_times_original

original_times_inverse = matrix * inverse_matrix;
original_times_inverse

%% Some matrices have no inverse.  For example:

matrix = [ 8, 1, 6,
           8, 18, 4,
           4, 9, 2 ];
       
inverse_matrix = inv(matrix);
inverse_matrix

det_matrix = det(matrix);
det_matrix

%% If any row is a multiple of another row, the matrix will NOT
% have an inverse (i.e, the determinant will be 0 or near 0.)

% Consider this matrix:

matrix = [ 8, 1, 6,
           12, 27, 6
           4, 9, 2 ];
matrix       

det_matrix = det(matrix);
det_matrix       

% If the determinant is near zero, don't attempt to invert.

if ( abs(det_matrix) > 0.001 )
    inverse_matrix = inv(matrix);
    inverse_matrix
end
 
