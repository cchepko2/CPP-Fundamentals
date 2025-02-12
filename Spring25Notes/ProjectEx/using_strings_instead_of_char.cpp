/*
Program Description: Given a choice between degrees (d)
or radians (r) as input units, and an input angle, alpha,
compute the sin and cosine of the angle.
*/

#include <iostream>  // For cout, cin, printf
#include <iomanip>  // For fixed and setprecision
#include <cmath> // For sin and cos functions and M_PI constant

using namespace std;

int main(void)
{
    string units;
    double angle, conversion_factor;

    cout << "Enter the units of your angle (d)egrees, or (r)adians: ";
    cin >> units;

    if( units == units[0])
    { // degrees
        cout << "Using degrees, enter an angle in degrees: ";
        cin >> angle;
        conversion_factor = M_PI/180;
    }
    else if(units == 'r')
    { // radians
        cout << "Using radians, enter an angle in radians: ";
        cin >> angle;
        conversion_factor = 1;
    }
    else
    {
        cout << "Invalid entry, ending program..." << endl;
        return -1; // An early return from main() ends the program
    }

    // The program has not exited, 
    // so we've got an angle in radians
    double sin_calc = sin(angle*conversion_factor);
    double cos_calc = cos(angle*conversion_factor);

    printf("The sin(%.2f) = %.2f, cos(%.2f) = %.2f\n", angle, sin_calc, angle, cos_calc);
    cout << fixed << setprecision(2) << "The sin of " << angle << " = " <<
        sin_calc << " and the cosine of " << angle << " = " << cos_calc << endl;

    return 0;
}