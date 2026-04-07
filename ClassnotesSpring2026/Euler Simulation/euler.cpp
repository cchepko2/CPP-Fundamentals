/*
Structures declaration and use
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

#include "euler.h"


// Euler version of get_distance
void get_distance_euler(PROJECTILE &projectile, double angle, double velocity)
{
    double x = 0, y = 0;
    double x_accel, y_accel, x_vel, y_vel;
    double max_height = 0, time = 0;
    double curr_velocity;

    const double gravity = 9.81;
    const double time_step = 0.001;
    const double air_density = 1.225;
    double area = pow(projectile.radius, 2)*M_PI;
    
    x_vel = velocity*cos(angle);
    y_vel = velocity*sin(angle);

    while(y > -0.01)
    {
        curr_velocity = sqrt(pow(x_vel, 2) + pow(y_vel, 2));
        //curr_accel_air = 0.5*air_density*projectile.drag_coeff*pow(curr_velocity, 2)*area/projectile.mass;
        x_accel = -1*0.5*air_density*projectile.drag_coeff*curr_velocity*x_vel*area/projectile.mass;
        y_accel = -1*0.5*air_density*projectile.drag_coeff*curr_velocity*y_vel*area/projectile.mass - gravity;
         
        x += x_vel*time_step;
        y += y_vel*time_step;

        y_vel += y_accel*time_step;
        x_vel += x_accel*time_step;

        if( y>max_height)
        {
            max_height = y;
        }
        time += time_step;
    }

    projectile.distance = x;
    projectile.time = time;
    projectile.height = max_height;
}