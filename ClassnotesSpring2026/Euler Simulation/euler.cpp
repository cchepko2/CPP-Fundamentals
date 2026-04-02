/*
Structures declaration and use
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

struct PROJECTILE {
    // Independent variables
     double mass;
     double radius;
     double drag_coeff;

     // Dependent variables to be calculated
     double distance;
     double time;
     double height;
    };

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