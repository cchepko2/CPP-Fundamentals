/*
Structures declaration and use
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

struct PROJECTILE {
     double mass;
     double radius;
     double distance;
     double time;
     double height;
    };

void get_distance(PROJECTILE &projectile);

int main()
{
    string name = "Corin";
    PROJECTILE Projectile1; 

    Projectile1.mass = 5.0;
    Projectile1.radius = 0.5;

    cout << "Mass = " << Projectile1.mass << endl;
    cout << "Radius = " << Projectile1.radius << endl;

    get_distance(Projectile1);

    cout << "Distance traveled = " << Projectile1.distance << endl;
    cout << "Height = " << Projectile1.distance << endl;
    cout << "Flight time = " << Projectile1.distance << endl;


    return 0;
}

void get_distance(PROJECTILE &projectile)
{
    double x = 0, y = 0;
    double angle = 30*M_PI/180.0;
    double velocity = 50;
    double x_accel, y_accel, x_vel, y_vel;

    const double gravity = 9.81;
    const double time_step = 0.1;

    x_vel = velocity*cos(angle);
    y_vel = velocity*sin(angle);

    while(y > -0.01)
    {
         
        x += x_vel*time_step;
        y += y_vel*time_step;

        cout << "x = " << x << "  y = " << y << endl;

        y_vel -= gravity*time_step;
        //x_vel += 0*time_step;
    }

    cout << "distance = " << x << endl;

}

/*void euler_dist(double angle, double velocity, double &dist, double &time, double &height)
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
}*/