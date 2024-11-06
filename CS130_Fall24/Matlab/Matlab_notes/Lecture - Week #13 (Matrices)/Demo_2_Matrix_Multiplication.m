% Matrix Algebra - Matrix Multiplication Demo
% Wayne Wall, CSCI-130

clear; clc; close all; format;

%% Matrix multiply 2 by 3 matrix * 3 by 2 matrix = 2 by 2 result.

A = [ 1, 2, 3,
      4, 5, 6 ];
  
B = [ 10, 20,
      30, 40,
      50, 60 ];
  
A
B  

mat_multiply_A_B_using_dot_products = [
    
    dot( A(1,:), B(:,1) ), dot( A(1,:), B(:,2) )
    dot( A(2,:), B(:,1) ), dot( A(2,:), B(:,2) )
    
];

mat_multiply_A_B_using_dot_products

mat_multiply_A_B = A * B;
mat_multiply_A_B


%% Matrix multiply 3 by 2 matix * 2 by 3 matrix = 3 by 3 result.

mat_multiply_B_A_using_dot_products = [
    
    dot( B(1,:), A(:,1) ), dot( B(1,:), A(:,2) ), dot( B(1,:), A(:,3) )
    dot( B(2,:), A(:,1) ), dot( B(2,:), A(:,2) ), dot( B(2,:), A(:,3) )
    dot( B(3,:), A(:,1) ), dot( B(3,:), A(:,2) ), dot( B(3,:), A(:,3) )    
];

mat_multiply_B_A_using_dot_products

mat_multiply_B_A = B * A;
mat_multiply_B_A

%% Matrix multiplication. 1 by 3 row vector * 3 by 1 column vector = 1 by 1 result.

A = [ 1, 2, 3 ];

B = [ 4,
      5,
      6 ];
  
A
B

dot_product_A_B = dot(A, B);
mat_multiply_A_B = A * B;

dot_product_A_B
mat_multiply_A_B

%% Matrix multiply 3 by 1 column vector * 1 by 3 row vector = 3 by 3 result.

dot_product_B_A = dot(B, A);
mat_multiply_B_A = B * A;

dot_product_B_A
mat_multiply_B_A


