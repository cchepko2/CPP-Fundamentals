#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string fname, lname;

    cout << "Please enter your first and last name: " << endl;
    cin >> fname >> lname;

    // Can add strings
    cout << "Hello " << fname + " " + lname << endl;

    // Cannot multiple strings, line below cause an error
    //string mult = "*"*10;

    return 0;

}