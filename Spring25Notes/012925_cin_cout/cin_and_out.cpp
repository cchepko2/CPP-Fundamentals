/*
Collect input from user into variables
Print the variables
*/

#include <iostream>

using namespace std;

int main(void)
{
    string name, other;

    // Can declare multiple varibles of one type separated by commas
    double number1=3, number2=5;

    cout << "Hello " << name << "!\n";
    cout << "number2/number1 = " << number2/number1 << endl;

    cout << "Enter your name please: ";
    cin >> name;
    cout << "Hello " << name << "!\n";

    cout << "Please enter two numbers separated by a space\n";
    cin >> number1 >> number2;

    cout << "number1 = " << number1 << ", number2 = " << number2 << endl;
    cout << "number2/number1 = " << number2/number1 << endl;

    if(cin.fail())
    {
        cin.clear();
        cin >> other;
        cout << "Other = " << other << endl;
    }

    cin >> other;
    cout << other << endl;

    return 0;
}