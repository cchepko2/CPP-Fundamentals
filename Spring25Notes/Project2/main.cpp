/*
Program Description: Given a choice between degrees (d)
or radians (r) as input units, and an input angle, alpha,
compute the sin and cosine of the angle.
*/

#include <iostream>  // For cout, cin, printf
#include <iomanip>  // For fixed and setprecision
#include <cmath> // For sin and cos functions and M_PI constant

#define drag_coeff 0.47
#define air_density 1.225
#define time_step 0.01
#define radius 0.05
#define mass 1

using namespace std;



int main(void)
{
    char units;
    double angle, conversion_factor, velocity;
    double x=0, y=0;
    double v_vert = velocity*sin(angle);
    double v_horz = velocity*cos(angle);
    double area = M_PI*pow(radius, 2);

    while(y >= 0)
    {
        x += v_horz * time_step;
        y += v_vert * time_step;

        double accel = air_density*drag_coeff*pow(velocity, 2)*area/(2*mass);
        
    }


    
    return 0;
}