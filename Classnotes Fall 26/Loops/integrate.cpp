#include <iostream>
#include <iomanip>

#define delta_x 0.000001

using namespace std;

int main()
{
    double function = 0; // function = area of f(x) = x
    double last_x=0;

    for(double x=0; x<10; x+=delta_x)
    {
        function += delta_x*x;

        //last_x = x;
    }

    cout << fixed << setprecision(16) << "Area = " << function << endl;

    return 0;
}