/*
Corin Chepko
2/19/26
Kattis Problem - doggopher: https://open.kattis.com/problems/doggopher
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string message = "Hello World!";
    string message2 = "More struff for a string.";

    cout << message.length() << endl;
    
    // First Character in the strinng
    cout << "First Char: " << message[0] << endl;
    cout << "Last Char: " << message[message.length()-1] << endl;

    // Can add strings together
    string long_message = message + " " + message2;
    cout << long_message << endl;

    if(message == "Hello World!")
    {
        cout << message << endl;
    }

    string units;
    cout << "Enter units to use: "; 
    cin >> units;

    //if(units == "Feet" or units == "Ft")
    if(units[0] == 'F' or units[0] == 'f')
    {
        
    }

    double PI = 3.14159;

    // Print to two decimal places
    cout << fixed << setprecision(2) << PI << endl;

    double distance = 999.99;
    // Print to 1 decimal place
    cout << fixed << setprecision(1) << distance << endl;

    // Default is right aligned
    string name = "Corin";
    cout << setw(30) << name << endl;
    cout << setw(30) << left << name << endl;
    //string spaces = (30-name.size())/2*' ';
    //cout << setw(30) << left << spaces << name << endl;

    return 0;
}