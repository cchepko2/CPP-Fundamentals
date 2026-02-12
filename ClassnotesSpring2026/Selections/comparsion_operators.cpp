#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string name = "Corin";
    int num1 = 5;
    int num2 = 4;
    char answer;

    double pi = 3.14159;
    double num3 = 3.51;
    

    cout << boolalpha << (num1==num2) << endl;
    cout << (num1>=num2) << endl;
    cout << (num1<num2) << endl;

    cout << (pi == 3.14159) << endl;
    cout << fixed << setprecision(16) << num3 << endl;
    cout << (num3 == 3.51) << endl; /// Floating point comparisions don't always work

    // Better to check within range
    double error = 0.000001;
    cout << (fabs(num3-3.51)<error) << endl;

    cout << (name == "Corin") << endl;


    cout << "Enter the distance traveled: ";
    cin >> num3;

    string units;
    cout << "Enter the units: ";
    cin >> units;


    if(units == "Feet" or "feet") // This is always true because the second comparision is incomplete
    
    // Use this instead
    if(units == "Feet" or units == "feet")
    //if(units == "Feet" || units == "feet")
    //if(units[0] == 'f' or units[0] == 'F')
    {
        num3 = num3/3.28;
    }

    

    cout << "The distance in meters is: " << num3 << endl;


    cout << "Enter an integer: " << endl;
    cin >> num1;
    // Check odd/even
    if(num1%2 == 1)
    {
        cout << "Number is odd." << endl;
    }
    else
    {
        cout << "Number is even." << endl;
    }

    cout << "Enter another integer: " << endl;
    cin >> num2;
    if(num1%2 == 1 )
    {
        if(num2%2 == 1)
        {
            cout << "Both are odd." << endl;
        }
        else
        {
            cout << "num1 is odd, num2 is even" << endl;
        }
    }
    else
    {
        if(num2%2 == 0)
        {
            cout << "Both are even." << endl;
        }
        else
        {
            cout << "num1 is even, num2 is odd" << endl;
        }
    }
    

    cout << "Do you want to play again? ";
    cin >> answer;
    
    if(answer == 'N' or answer == 'n')
    {
        cout << "Quiting" << endl;
        // break;
    }

    return 0;
}