#include <iostream>

using namespace std;

int main()
{
    double distance;
    double ft_to_meters = 3.28;
    int unit_switch;
    double dist_in_feet;

    cout << "Enter 1 for feet, 2 for meters: ";
    cin >> unit_switch;

    cout << "Enter the distance in meters: ";
    cin >> distance;

    switch(unit_switch)
    {
        case 1: // Convert to feet
            dist_in_feet = distance*3.28;
            break;
        case 2: // Convert to meters
            dist_in_feet = distance;
            break;
            
    }

    cout << "The distance in feet = " << dist_in_feet << endl;

    return 0;
}