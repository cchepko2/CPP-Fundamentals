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
#define time_step 0.0001
#define radius 0.05
#define mass 1
#define GRAVITY -9.81

using namespace std;



int main(void)
{
    char units;
    double angle, conversion_factor, velocity;
    double x=0, y=0, time=0, max_height = 0;

    cout << "Enter the velocity: ";
    cin >> velocity;
    cout << "Enter the angle in degrees: ";
    cin >> angle;

    angle = angle*M_PI/180.0;

    double v_vert = velocity*sin(angle);
    double v_horz = velocity*cos(angle);
    double area = M_PI*pow(radius, 2);

    while(y >= 0)
    {
        x += v_horz * time_step;
        y += v_vert * time_step;
        time += time_step;

        velocity = sqrt(pow(v_vert, 2) + pow(v_horz, 2));
        
        if( y > max_height)
            max_height = y;

        double accel = air_density*drag_coeff*pow(velocity, 2)*area/(2*mass);
        double accel_y = accel*v_vert/velocity;
        double accel_x = accel*v_horz/velocity;

        //cout << accel_x << ' ' << accel_y << endl;

        v_vert += GRAVITY*time_step - accel_y*time_step;
        v_horz -= accel_x*time_step;
        
    }

    cout << "Final time is: " << time << " seconds." << endl;
    cout << "Maximum height is: " << max_height << " meters." << endl;
    cout << "Final distance is: " << x << " meters." << endl;
    
    return 0;
}