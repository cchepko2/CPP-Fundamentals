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

void page_of_cout(void);
void greet(string name);
double distance_calc(double a, double v);

int main()
{
    double angle, velocity, distance;

    string name = "Sandra";


    page_of_cout();
    greet(name);
    cout << "What is your name, " << name << '?' << endl;

    cout << "Enter an angle in degrees: ";
    cin >> angle;
    angle = angle*PI/180;

    cout << "Enter a velocity (m/s): ";
    cin >> velocity;

    distance = pow(velocity, 2)*sin(2*angle)/gravity;
    cout << fixed << setprecision(1) << "The projectile went " << distance << " meters." << endl;

    distance = distance_calc(angle, velocity);

    return 0;
}

// Fruitless function
void page_of_cout(void)
{
    for( int i=0; i<100; i++)
        cout << "A page of couts...." << endl;
}

// Fruitless function, takes data, does not return data
void greet(string name)
{
    cout << "Welcome " << name << "!!" << endl;
    printf("Welcome %s!!!\n", name.c_str());
    name = "Jack";
}

// Fruitful function, takes data, and return data
double distance_calc(double a, double v)
{
    double d;
    d = pow(v, 2)*sin(2*a)/gravity;
    return d;
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