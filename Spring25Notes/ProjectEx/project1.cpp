/*
Corin Chepko
Project 1: Compute projectile height, distance, and flight time, using
    input: angle, muzzle velocity, units, target distance
    
    print the result in the selected units (or both) and determine if the target
    is within maximum range
    
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double distance, angle, velocity, target_dist, max_height, flight_time, max_dist;
    double gravity = 9.81;
    string units;

    cout << "Input feet (f) or meters (m) for units: ";
    cin >> units;
    if(units[0] == 'f' or units[0] == 'F')
    {
        gravity = 32.2;
    }

    cout << "Enter velocity: ";
    cin >> velocity;

    cout << "Enter angle in degrees: ";
    cin >> angle;
    if( angle >= 0 and angle <= 90)
    {
        angle = angle*M_PI/180;
    }
    else
    {
        cout << "Ending program. Try a better angle.\n";
        return -1;
    }

    cout << "Enter target distance: ";
    cin >> target_dist;

    max_height = pow(velocity, 2)*pow(sin(angle), 2)/(2*gravity);
    flight_time = 2*velocity*sin(angle)/gravity;
    distance = pow(velocity, 2)*sin(2*angle)/gravity;

    max_dist = pow(velocity, 2)*sin(2*45*M_PI/180.)/gravity;

    cout << "\n\nMax height = " << max_height << ' ' << units << endl;
    cout << "Flight time = " << flight_time << " seconds" << endl;
    cout << "Distance = " << distance << ' ' << units << endl;
    cout << "Maximum Distance (at 45 degrees) = " << max_dist << ' ' << units << endl;

    if(max_dist < target_dist)
    {
        cout << "Target is not within maximum range.\n";
    }
    else{
        cout << "Target is within range.\n";
    }

    return 0;
}