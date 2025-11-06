#include <iostream>
#include <cmath>

#define PI 3.14159

using namespace std;

int main()
{
    double error;
    double actual;
    double approx;

    double angle;
    for(angle=0; angle <= 90; angle += 0.1)
    {
        double radians = angle*PI/180.0;
        actual = sin(radians);
        approx = angle*PI/180.0;

        error = fabs(actual-approx)/actual;

        if(error > 0.05)
        {
            break;
        }
    }

    cout << "At " << angle << " degrees passed 5% error." << endl;
    cout << "Actual: " << actual << '\t' << "Approx: "
        << approx << endl;

    return 0;
}