/* 
Corin Chepko
10/1/26

Projectile function, takes a velocity and angle and computes flight time,
 distance and max_height */

 
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

const double gravity = 9.81;

void calc_projectile(double velocity, double angle, double &distance, double &time, double &max_height);

int main()
{
    double velocity, angle, distance, time, max_height;

    cout << "Enter muzzle velocity in m/s and angle in degrees: ";
    cin >> velocity;
    cin >> angle;
    angle = angle*M_PI/180.0; // convert angle to radians

    calc_projectile(velocity, angle, distance, time, max_height);

    cout << "The projectile flew for " << time << " seconds, traveled " 
        << distance << " meters, and went " << max_height << " meters high."
        << endl;

    return 0;
}

void calc_projectile(double velocity, double angle, double &distance, double &time, double &max_height)
{
    time = 2*velocity*sin(angle)/gravity;
    distance = pow(velocity, 2)*sin(2*angle)/gravity;
    max_height = pow(velocity, 2)*pow(sin(angle),2)/(2*gravity);
}