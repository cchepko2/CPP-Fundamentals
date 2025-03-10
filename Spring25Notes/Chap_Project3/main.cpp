#include <iostream>

using namespace std;

void solveEquation(double a, double b, double c, double d, 
    double e, double f, double& x, double& y, bool& isSolvable)
{
    if( a*d - b*c == 0)
    {
        cout << "The equation has no solution" << endl;
    }
    else
    {
        x = (e*d - b*f)/(a*d - b*c);
        y = (a*f-c*e)/(a*d - b*c);
        cout << "x is " << x << " and y is " << y << endl;
    }
}

int main(void)
{
    double a, b, c, d, e, f, x, y;
    bool isSolvable;

    cout << "Enter a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;

    solveEquation(a, b, c, d, e, f, x, y, isSolvable);
    
    return 0;
}

