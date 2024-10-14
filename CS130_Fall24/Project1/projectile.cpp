/*
Author: Corin Chepko
Date: 10/9/24
Program info: Projectile program
    Inputs velocity, angle, target distance
    Outputs projectile height, flight time, distance, 
    and max distance (assuming 45degree angle)
*/

#include <iostream>
#include <math.h>

double GRAVITY = 9.81;

using namespace std;

int main(void)
{
    double velocity, distance, angle_deg, angle_rad;
    double max_dist, max_height, flight_time;
    string units = "meters";

    cout << "\n\nEnter the units to use (feet, meters): ";
    cin >> units;

    if(units[0] == 'f')
    {
        GRAVITY = 32.17; // Change gravity to ft/s^2
    }
    else if(units[0] == 'm')
    {
        GRAVITY = 9.81;
    }
    else
    {
        cout << "Invalid units, defaulting to meters..." << endl;
    }

    cout << "Please input muzzle velocity:";
    cin >> velocity;

    cout << "Please input the angle, in degrees:";
    cin >> angle_deg;
    angle_rad = M_PI*angle_deg/180;

    max_height = pow(velocity, 2)*pow(sin(angle_rad), 2)/(2*GRAVITY);
    flight_time = 2*velocity*sin(angle_rad)/GRAVITY;
    distance = pow(velocity, 2)*sin(2*angle_rad)/GRAVITY;

    printf("Distance traveled = %.2f %s.\n", distance, units.c_str());
    printf("Max height = %.1f.\n", max_height);
    printf("Flight time = %.1f.\n", flight_time);

    max_dist = pow(velocity, 2)*sin(2*45*M_PI/180)/GRAVITY;
    printf("Maximum distance traveled at %.1f and 45 degrees = %.2f.\n", velocity, max_dist);

    return 0;
}