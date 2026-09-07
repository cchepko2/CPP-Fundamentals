/*
Corin Chepko
9/7/26
Chap 2 notes, input and math operations
*/

#include <iostream>
#include <iomanip>  // for setprecision and fixed

using namespace std;

int main()
{
    int num1 = 6, num2 = 7;
    double fnum1 = 6, fnum2 = 7;

    double a_floating_point_number = 3.2;


    // The force floating point math, a floating point number must be in the operation
    /* wrong */ cout << "Average of num1 and num2 = " << (num1+num2)/2 << endl;
    cout << "Average of num1 and num2 = " << (num1+num2)/2.0 << endl;

    cout << "Average of fnum1 and fnum2 = " << (fnum1+fnum2)/2 << endl;

    cout << "a_floating_point_number = " << a_floating_point_number << endl;
    // Some numbers are not exactly represented by floating point
    cout << "a_floating_point_number = " << fixed << setprecision(16) << a_floating_point_number << endl;

    return 0;
}