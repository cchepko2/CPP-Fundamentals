#include <iostream>
#define PI 3.14159

using namespace std;

const double pi = 22/7;  // This calculates based on integer 
    // mathematics because the operands are integers, so 22/7 = 3

const double better_pi = 22.0/7; // Uses floating-point math because a decimal is used


int main(void)
{
    cout << "Hello World!" << endl;

    cout << "PI = " << pi << endl;
    cout << "better_pi = " << better_pi << endl;

    cout << "defined PI = " << PI << endl;

    double radius = 4.5;

    cout << "Enter a radius and I'll calculate the circumference: ";
    cin >> radius;

    double circumference = 2*PI*radius;

    cout << "Circumference of circle with radius " << radius << " = " << circumference << endl;

    return 0;
}