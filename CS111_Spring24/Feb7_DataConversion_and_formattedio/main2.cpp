#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void)
{
    string fname = "Corin";
    string lname = "Chepko";
    int age = 42;
    double height = 6.5645;

    string fname2 = "John";
    string lname2 = "McSweep";
    int age2 = 13;
    double height2 = 5.59;

    //cout << showpoint << height << endl;
    cout << setw(10) << left << fname;
    cout << setw(15) << left << lname;
    cout << setw(5) << age;
    cout << setw(5) << fixed << setprecision(3) << height << endl;

    cout << setw(10) << left << fname2 << setw(15) << left << lname2
     << setw(5) << age2 << setw(5) << fixed << setprecision(3) << height2 << endl;

    cout << "2 to 3rd power = " << pow(2,3) << endl; 
    cout << "sin(pi) = " << sin(M_PI) << endl;

    return 0;
}