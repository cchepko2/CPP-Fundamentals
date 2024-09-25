#include <iostream>

using namespace std;

// main takes two parameters, first is number of parameter strings,
// second is a pointer to the strings 
int main(int argc, char * argv[])
{
    // argv[0] is first argument which is the program name
    cout << "Name of this program is " << argv[0] << endl;
    if(argc > 1 && string(argv[1]) == "test") // If there is more than one argument to main(), print the second argument
    {
        cout << "Running test function: " << argv[1] << endl;
    }

    int number;

    cout << "Enter number for the day: ";
    cin >> number;

    switch(number)
    {
        case 1:
            cout << "Day is Monday" << endl;
            break;
        case 2:
            cout << "Day is Tuesday" << endl;
            break;
        case 3:
            cout << "Day is Wednesday" << endl;
            break;
        case 4:
            cout << "Day is Thursday" << endl;
            break;
        case 5:
            cout << "Day is Friday" << endl;
            break;
        case 6:
            cout << "Day is Saturday" << endl;
            break;
        case 7:
            cout << "Day is Sunday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;

    }

    return 0;
}