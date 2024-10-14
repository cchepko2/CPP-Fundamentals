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
void clearScreen();

int main(void)
{
    double velocity, angle_deg, angle_rad, target_dist;
    double max_height, distance, flight_time;

    string units = "meters";
    string greeting = "This program will calculate the distance, height, and flight_time of a projectile given it's velocity and angle of launch.\n\n";

    //clearScreen();

    cout << endl << "Welcome to my program!" << endl;
    cout << greeting << "It will also tell if a target distance is " << 
    "within the maximum distance the projectile can fly, given a " << 
    "45 degree angle of launch." << endl << endl;

    cout << "Enter the units you would like to use (meters, feet): ";
    cin >> units;

    if(units[0] == 'm' || units[0] == 'M')
    {
        GRAVITY = 9.81;
        units = "meters";
    }
    else if(units[0] == 'f' || units[0] == 'F')
    {
        GRAVITY = 32.17;
        units = "feet";
    }
    else
    {
        cout << endl << "\nUnknown input, defaulting to units of meters...\n" << endl;
        GRAVITY = 9.81;
        units = "meters";
    }

    cout << "Please enter the velocity of the projectile: ";
    cin >> velocity;

    cout << "Please enter the angle of the projectile: ";
    cin >> angle_deg;
    angle_rad = angle_deg*M_PI/180;

    distance = find_dist(velocity, angle_rad);
    max_height = pow(velocity, 2)*pow(sin(angle_rad), 2)/(2*GRAVITY);
    flight_time = 2*velocity*sin(angle_rad)/GRAVITY;

    printf("\nAt a velocity of %.1f %c/s and an angle of %.1f degrees:\n\n", velocity, units[0], angle_deg);
    printf("The projectile went %.1f %s.\n", distance, units.c_str());
    printf("The maximum height reached was %.1f %s.\n", max_height, units.c_str());
    printf("The flight time was %.1f seconds.\n", flight_time);






    return 0;
}

double find_dist(double velocity, double angle)
{
    return pow(velocity,2)*sin(2*angle)/GRAVITY;
}

void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}