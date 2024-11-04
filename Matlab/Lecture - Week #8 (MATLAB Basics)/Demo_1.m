% A comment line can be placed in a MATLAB script by using the "%"
% character.  Everything from the "%" to the end of the line is a comment.

%% Two adjacent "%" characters indicate the comment line is the start of
% a script section.  Sections are MATLAB statement groupings aimed at
% increasing understanding of the script.  The statements in a section are
% usually related to each other in some way.

%% Computations can be done simply by typing in a valid expression which
%  will be evaluated according to the PEMDAS precedence rules.

1 + 1

10 / 4

180 / 2 + 4

180 / (2 + 4)

%% All numbers are assumed to be "doubles" (i.e., they can have fractional
%  parts) and variables don't have to be declared before they are used.  An
% "=" is the assignment operator.

sum = 1 + 2 + 3 + 4

average = sum / 4

sum = sum + 1

%% There is no special statement separator (such as the C++ ";").  Each line
%  contains one statement unless the line ends with "..." (three periods),
%  in which case the statement is assumed to be continued on the next line.

another_sum = 1 + 2 + ...
3 + 4 + ...
5 + 6

%% A semi-colon (";") at the end of a line means do NOT display the result
%  of the calculation in the Command Window.

sum2 = 1 + 2 + 3 + 4 + 5 + 6;

average2 = sum2 / 7;

sum2 = sum2 + 1;

%% The calculations in the previous section were performed, but the results
%  were not displayed in the Command Window.  The value of a variable can
%  be displayed by typing just its name (with no ";" following).

sum2
average2




