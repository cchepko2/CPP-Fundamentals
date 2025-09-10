#include <iostream>
#include <iomanip>   // Provides extra cout functionallity

#include <math.h>
#include <stdio.h>

#define PI 3.14159265358979323846  /* pi */

using namespace std;

int main()
{
    int num = 10;
    bool even = num%2;

    cout << even << endl;

    if(!even)
    {
        cout << "Number is even!" << endl;
    }
    else
    {
        cout << "Number is odd!" << endl;
    }
    

    double degrees = 30;
    double radians = degrees*PI/180.0;
    double gravity = 9.810000807;

    cout << "sin(30degrees) = " << sin(radians) << endl;
    cout << fixed << setprecision(16) << endl;
    cout << "sin(30degrees) = " << sin(radians) << endl;

    printf("sin(30degrees) = %.16f\n", sin(radians));

    cout << "gravity = " << gravity << endl;
    printf("gravity = %.16f\n", gravity);
    cout << fixed << setprecision(2) << endl;
    cout << "gravity = " << gravity << endl;

    cout << (sin(radians) == 0.5) << endl;

    return 0;
}