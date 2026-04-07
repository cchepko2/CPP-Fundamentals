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
    PROJECTILE Projectile1; 

    Projectile1.mass = 0.057; // Tennis Ball
    Projectile1.radius = 0.034; // Tennis ball
    Projectile1.drag_coeff = 0.47;

    cout << "Mass = " << Projectile1.mass << endl;
    cout << "Radius = " << Projectile1.radius << endl;
    cout << "Area = " << pow(Projectile1.radius, 2)*M_PI << endl;

    double angle;
    double velocity;

    cout << "Enter an angle in degrees: ";
    cin >> angle;
    angle = angle*M_PI/180.0;

    cout << "Enter a velocity in m/s: ";
    cin >> velocity;

    get_distance_euler(Projectile1, angle, velocity);

    cout << "Distance traveled = " << Projectile1.distance << endl;
    cout << "Height = " << Projectile1.height << endl;
    cout << "Flight time = " << Projectile1.time << endl;


    return 0;
}