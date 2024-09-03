// Read in multiple lines...

#include <iostream>
#define PI 3.14159

using namespace std;

const double pi = 22/7;  // This calculates based on integer 
    // mathematics because the operands are integers, so 22/7 = 3

const double better_pi = 22.0/7; // Uses floating-point math because a decimal is used


int main(void)
{
    string fname, lname, fullname;

    cout << "Please enter first name: ";
    cin >> fname;

    cout << "Please enter last name: ";
    
    cout << fname << ' ' << lname << endl;

    cout << "Enter first name and last initial: ";

    //cin.get();
    cin.ignore(1000, '\n');
    getline(cin, fullname);

    cout << fullname << endl;

    cout << "Press enter to exit..." << endl;

    cin.get();
    return 0;
}