% Wayne Wall's demo of MATLAB conditional statements.

clear; clc; close all;

%% MATLAB supports relational operators which compare two values and return
%  a "logical 1" if the comparison is true and a "logical 0" if the
%  comparison is false.
%
%  Here's the full list of MATLAB logical operators:
%
%    <      less than
%    >      greater than
%    <=     less than or equal
%    >=     greater than or equal
%    ==     equal to
%    ~=     not equal to

%% Initialize some named entities.

A = 15;
B = 10;

%% The "if-else-end" construct allows one to perform various statements
%  depending on a condition.

if ( A == B )
    disp( 'A is equal to B' )
else
    if ( A < B )
        disp( 'A is less than B' )
    else
        if (A > B )
            disp( 'A is greater than B' )
        end
    end
end
