%% Start with a clean slate.

clear; clc;

%% A matrix is a two-dimensional grouping of row and column vectors.
%  One way matrices can be initialized is by specifying the row vectors:

My_matrix_1 = [
    [ 8, 1, 6i ],
    [ 3, 5, 7 ],
    [ 4i, 9, 2 ]
]

transpose(My_matrix_1)
My_matrix_1'

%% Another way to initialize a matrix is by specifying the column vectors:

My_matrix_2 =  [ [ 8; 3; 4 ], [ 1; 5; 9 ], [ 6; 7; 2 ] ];

My_matrix_2

%% The transpose of a matrix is a new matrix which has the corresponding
%  rows and columns interchanged (i.e., row 1 -> col 1, row 2 -> col 2,
%  etc.)

My_matrix_1

My_matrix_1_transposeA = transpose(My_matrix_1)
My_matrix_1_transposeB = My_matrix_1'

%% A specific element in a matrix can be referenced by indicating its row
%  and column number in parentheses.  Note: The numbering (a.k.a., indexing
%  or subscripting) begins at 1 (i.e., 1, 2, 3, ...).

My_matrix_1
first_row_last_column   = My_matrix_1(1,3)
second_row_first_column = My_matrix_1(2,1)
third_row_second_column = My_matrix_1(3,2)

%% When the symbol ":" is used as a subscript, it means "all".  So, to
%  reference all matrix elements in a row:
% Unlike C++, index begin at 1, and instead of [] to refer to elements,
% Matlab uses ()

first_row  = My_matrix_1(1,:)
second_row = My_matrix_1(2,:)
third_row  = My_matrix_1(3,:)

%% To reference all matrix elements in a column:

first_col  = My_matrix_1(:,1)
second_col = My_matrix_1(:,2)
third_col  = My_matrix_1(:,3)

%% This would be a long-winded way of referencing the entire matrix:

all_rows_all_columns = My_matrix_1(:,:)
My_matrix_1

