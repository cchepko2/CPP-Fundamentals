/*
Corin Chepko
10/7/24
Projectile Program
*/

#include <iostream>
#include <math.h>

using namespace std;

double GRAVITY = 9.81;

double find_dist(double velocity, double angle);

int main(void)
{
    double velocity, angle_deg, angle_rad, target_dist;
    double max_height, distance, flight_time;

    string units = "meters";

    cout << endl << "Welcome to my program." << endl;
    cout << "This program will calculate the distance, height," << 
    " and flight_time of a projectile given it's velocity and angle " <<
    "of launch.\n\n" << "It will also tell if a target distance is " << 
    "within the maximum distance the projectile can fly, given a " << 
    "45 degree angle of launch." << endl << endl;

    cout << "Please enter the velocity of the projectile: ";
    cin >> velocity;

    cout << "Please enter the angle of the projectile: ";
    cin >> angle_deg;
    angle_rad = angle_deg*M_PI/180;

    distance = find_dist(velocity, angle_rad);

    printf("At a velocity of %.2f and an angle of %.1f, the projectile went %.2f %s.", velocity, angle_deg, distance, units.c_str());







    return 0;
}

double find_dist(double velocity, double angle)
{
    return pow(velocity,2)*sin(2*angle)/GRAVITY;
}