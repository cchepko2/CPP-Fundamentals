%% MATLAB scripts are programs and, as such, when you run one, you usually
%  want to start with a clear Command Window and an empty Workspace.

clear    % Clears the Workspace
clc      % Clears the Command Window


%% MATLAB has many functions in its pre-packaged libraries.  It also has
%  the symbol "pi" predefined.

radius = 10;

area = pi * radius ^ 2;     % "^" is the exponentiation operator.

area    % The value of "area" will be displayed because there's no ";"

%% Pythagorean Theorm example.

sideA = 3;
sideB = 4;

sideC = sqrt( sideA ^ 2 + sideB ^ 2 );  % Calculates sideC, but doesn't display it.
sideC

%% Alternately, the library function "hypot(..., ...)" can be called.

hypotenuse = hypot(sideA, sideB)    % Will be displayed because no ";".

%% MATLAB has two sets of trig functions.  One expects the function argument
%  to be in radians, the other in degrees.

sine = sin(pi/2)
cosine = cos(pi/2)
tangent = tan(pi/4)

sine = sind(90)         % Expects argument in degrees
cosine = cosd(90)
tangent = tand(45)
