#include <iostream>
#include <cmath>

#define PI 3.14159

using namespace std;

int main()
{
    double degrees, radians, answer;

    cout << "Enter the angle in degrees: ";
    cin >> degrees;

    radians = degrees*PI/180;

    cout << "The sin(" << degrees << ") = " << sin(radians) << endl;
    cout << "The cin(" << degrees << ") = " << cos(radians) << endl;

    return 0;
}