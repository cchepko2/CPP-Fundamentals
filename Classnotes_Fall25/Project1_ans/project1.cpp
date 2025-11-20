/*
Programmer: Corin Chepko
Date: 10/30/25
Program: Compute projectile height, flight time, and distance, given an initial angle and velicity
*/

#include <iostream>
#include <cmath>

//#define GRAVITY 9.81
#define PI 3.14159

using namespace std;

void calc_dist(double angle, double velocity, double &dist, double &time, double &height);
double cacl_dist2(double angle, double velocity);
void euler_dist(double angle, double velocity, double &dist, double &time, double &height);

double GRAVITY = 9.81;

int main(void)
{
    double angle, velocity, distance, time, height;
    char units;

    cout << "Enter units (f/m): ";
    cin >> units;

    if(units == 'f')
    {
        GRAVITY = 32.2;
    }

    cout << "Enter an angle from 0-90 degreees: ";
    cin >> angle;

    cout << "Enter a velocity: ";
    cin >> velocity;

    calc_dist(angle, velocity, distance, time, height);

    string units_str;
    if(units == 'f')
    {
        units_str = " Feet";
    }
    else
    {
        units_str = " Meters";
    }

    cout << "The distance of the projectile: " << distance << units_str << endl;
    cout << "The maximun height of the projectile: " << height << units_str << endl;
    cout << "The flight time of the projectile: " << time << " seconds." << endl;

    double max_distance;
    calc_dist(45, velocity, max_distance, time, height);
    cout << "The maximum possible distance of the projectile at : " << velocity << " is " << max_distance << units_str << endl;
    cout << "\n";


    euler_dist(angle, velocity, distance, time, height);

    cout << "The euler distance of the projectile: " << distance << units_str << endl;
    cout << "The euler maximun height of the projectile: " << height << units_str << endl;
    cout << "The euler flight time of the projectile: " << time << " seconds." << endl;

    return 0;
}

void calc_dist(double angle, double velocity, double &dist, double &time, double &height)
{
    dist = pow(velocity, 2)*sin(2*angle*PI/180.0)/GRAVITY;
    time = 2*velocity*sin(angle*PI/180.0)/GRAVITY;
    height = pow(velocity, 2)*pow(sin(angle*PI/180), 2)/(2*GRAVITY);
}

void euler_dist(double angle, double velocity, double &dist, double &time, double &height)
{
    const double TIME_INC = 0.001;
    const double mass = 5;
    const double radius = 0.5;
    double area = PI*pow(radius, 2);
    const double coeff = 0.47;
    const double air_density = 1.225;

    double x=0, y=0;
    double x_vel = cos(angle*PI/180.0)*velocity;
    double y_vel = sin(angle*PI/180)*velocity;
    time = 0;
    height = 0;
    double curr_velocity, curr_accel_air;
    double x_decel, y_decel;

    while(y >= 0)
    {
        curr_velocity = sqrt(pow(x_vel, 2) + pow(y_vel, 2));
        curr_accel_air = 0.5*air_density*coeff*pow(curr_velocity, 2)*area/mass;

        x_decel = -1*curr_accel_air*(x_vel/curr_velocity)*TIME_INC;
        y_decel = -1*curr_accel_air*(y_vel/curr_velocity)*TIME_INC;

        y_vel += -1*GRAVITY*TIME_INC + y_decel;
        x_vel += x_decel;

        x += x_vel*TIME_INC;
        y += y_vel*TIME_INC;

        
        time += TIME_INC;
        if(y > height)
        {
            height = y;
        }
    }
    dist = x;
    //cout << curr_velocity << endl;
}