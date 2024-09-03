#include <iostream>
#define PI 3.14159

using namespace std;

const double pi = 22/7;  // This calculates based on integer 
    // mathematics because the operands are integers, so 22/7 = 3

const double better_pi = 22.0/7; // Uses floating-point math because a decimal is used


int main(void)
{
    double number;
    string phrase;

    cout << "Please enter a number: ";
    cin >> number;

    cout << "Please enter a string: ";
    cin >> phrase;
    

    cout << "Number = " << number << endl;
    cout << "Phrase is " << phrase << endl;

    cout << "Enter a number followed by a phrase: ";
    cin >> number >> phrase;

    cout << number << endl << phrase << endl;

    return 0;
}