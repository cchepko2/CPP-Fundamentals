#include <iostream>

using namespace std;

double get_euler_dist(double angle, double velocity);

int main()
{

    return 0;
}

double get_euler_dist(double angle, double velocity)
{
    double x=0, y=0;
    const double time_step = 0.01; // Change value until it matches projectile program without air resistance

    while(y > 0)
    {
        // calculate the x_component and y_component of the
        // velocity ex: sin(angle) = Vy/sqrt((Vx^2+Vy^2))
        
        // Update x with x += x_velocity*time_step
        // Update y with y += y_velocity*time_step

        // update x_velocity with x_vel += x_accel*time_step
        // update y_veolcity with y_vel += y_accel*time_step

    }
}