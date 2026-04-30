/*
Structures declaration and use
https://dynref.engr.illinois.edu/afp.html
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

#include "euler.h"

void get_distance_euler(PROJECTILE &projectile, double angle, double velocity);

int main()
{
    PROJECTILE tennis_ball; 

    tennis_ball.mass = 0.057; // Tennis Ball
    tennis_ball.radius = 0.034; // Tennis ball
    tennis_ball.drag_coeff = 0.47;

    cout << "Mass = " << tennis_ball.mass << endl;
    cout << "Radius = " << tennis_ball.radius << endl;
    cout << "Area = " << pow(tennis_ball.radius, 2)*M_PI << endl;

    double angle;
    double velocity;

    cout << "Enter an angle in degrees: ";
    cin >> angle;
    angle = angle*M_PI/180.0;

    cout << "Enter a velocity in m/s: ";
    cin >> velocity;

    get_distance_euler(tennis_ball, angle, velocity);

    cout << "Distance traveled = " << tennis_ball.distance << endl;
    cout << "Height = " << tennis_ball.height << endl;
    cout << "Flight time = " << tennis_ball.time << endl;


    return 0;
}