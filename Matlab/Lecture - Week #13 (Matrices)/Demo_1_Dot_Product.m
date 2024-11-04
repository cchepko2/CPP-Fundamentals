% Matrix Algebra - Dot Product Demo
% Wayne Wall, CSCI-130

clear; clc; close all; format;

%% Element by element product.

A = [ 1, 2, 3 ];
B = [ 4, 5, 6 ];
A
B

element_product = A .* B;
element_product

%% Dot Product
%  Link to web page: https://www.mathsisfun.com/algebra/vectors-dot-product.html

sum_element_product = sum(element_product);
sum_element_product

dot_product_A_B = dot(A, B);
dot_product_B_A = dot(B, A);

dot_product_A_B
dot_product_B_A

%% Calculate fast food bill.

% A group of friends went to a local fast food establishment.  They ordered
% four hamburgers at $2.99 each, three soft drinks at $1.49 each, one milk
% shake at $2.50, two orders of fries at $0.99 each and two orders of onion
% rings at $1.29 each.

num_hamburgers = 4;
cost_per_hamburger = 2.99;          % dollars

num_soft_drinks = 3;
cost_per_soft_drink = 1.49;         % dollars

num_milk_shakes = 1;
cost_per_milk_shake = 2.50;         % dollars

num_fries = 2;
cost_per_fries = 0.99;              % dollars

num_onion_rings = 2;
cost_per_onion_rings = 1.29;        % dollars

num_items = [ num_hamburgers, num_soft_drinks, num_milk_shakes, num_fries, num_onion_rings ];
num_items

cost_per_item = [ cost_per_hamburger, cost_per_soft_drink, cost_per_milk_shake, ...
                  cost_per_fries, cost_per_onion_rings ];

format bank
cost_per_item
format

%% Calculate and display total cost.
              
total_cost = dot(num_items, cost_per_item);

display_text = ['Total Cost = $', num2str(total_cost) ];

disp(display_text);
