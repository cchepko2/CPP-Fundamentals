#include <iostream>

using namespace std;

int main()
{
    double radius = 2;
    double diameter = 2*radius;

    // When integer division is in an expression, us a deciaml to force floating point math
    double x = 5 * (3./2);

    cout << "x = " << x << endl;
    
    cout << "Radius = " << radius << ", Diameter = " << diameter << endl;

    return 0;
}