% CS130 Notes

%clear workspace, clear command console, close all plots, format text to default
clear; clc; close all; format;

angle = input("Enter an angle: ")

angle*2

vector = [1 2 3 4 5]
column = vector'

table = [vector; [2 3 4 5 6]]

table = [table [9; 9]]

% Elementwise math using a scaler
double_table = 2*table

% Elementwise math using a scaler function
sqrt_table = sqrt(table)

rows = [1:1:10]
rows_linspace = linspace(1, 10, 10)

columns = [1:1:10]'

rows.*columns

x = linspace(0,100);
y = -(x-50).^2 + 100;

plot(x,y, Color='b')

angle*2



