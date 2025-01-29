#include <iostream>

using namespace std;

int main(void)
{
    string name;
    double number1, number2;

    cout << "Enter 2 numbers: ";
    cin >> number1 >> number2;

    // If a getline() will follow cin statements, add a cin.ignore
    // to throw out the hangling '\n' in the input stream
    cin.ignore(1, '\n');

    cout << "Please enter your full name: ";
    
    // cin stops at a space, so cannot collect a full name, need to use
    // getline instead
    //cin >> name;

    getline(cin, name);
    
    cout << "Hello " << name << endl;


    return 0;
}