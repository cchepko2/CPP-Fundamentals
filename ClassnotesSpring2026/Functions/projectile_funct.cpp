/*
Corin Chepko
3/4/26
Projectile Program: Prints the distance of a 
projectile given an angle and velocity
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

#define PI 3.14159

using namespace std;
double gravity = 9.81;


double distance_calc(double a, double v);
void distance_time_height_calc(double angle, double velocity, 
        double &distance, double &height, double &time);

int main()
{
    double angle, velocity, distance, height, time;

    cout << "Enter an angle in degrees: ";
    cin >> angle;
    angle = angle*PI/180;

    cout << "Enter a velocity (m/s): ";
    cin >> velocity;

    distance = distance_calc(angle, velocity);
    cout << fixed << setprecision(1) << "The projectile went " << distance << " meters." << endl;

    distance_time_height_calc(angle, velocity, distance, height, time);
    cout << fixed << setprecision(1) << "The projectile went " << distance << " meters." << endl;
    cout << "The flight time was: " << time << endl;
    cout << "The height was: " << height << endl;

    return 0;
}

// Fruitful function, takes data, and return data
double distance_calc(double a, double v)
{
    double d;
    d = pow(v, 2)*sin(2*a)/gravity;
    return d;
}

double time_calc(double a, double v)
{
    return 14;
}

double height_calc(double a, double v)
{
    return 100;
}


// Distance function that takes the address of the variables from main and will fill
// in the answers
void distance_time_height_calc(double angle, double velocity, 
        double &distance, double &height, double &time)
{
    distance = pow(velocity, 2)*sin(2*angle)/gravity;
    time = 14;
    height = 100;
}


double running_avg(double measurement)
{
    int NUM_SAMPLES = 10;
    static double average = 0;
    average += measurement/NUM_SAMPLES;
    return average;
}