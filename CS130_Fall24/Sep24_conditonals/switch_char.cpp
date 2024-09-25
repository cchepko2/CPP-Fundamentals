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

    char day;

    cout << "Enter the first character for the day: ";
    cin >> day;

    switch(day)
    {
        case 'm':
            cout << "Day is Monday" << endl;
            break;
        case 't':
            cout << "Day is Tuesday" << endl;
            break;
        case 'w':
            cout << "Day is Wednesday" << endl;
            break;
        case 'r':
            cout << "Day is Thursday" << endl;
            break;
        case 'f':
            cout << "Day is Friday" << endl;
            break;
        case 's':
            cout << "Day is Saturday" << endl;
            break;
        case 'n':
            cout << "Day is Sunday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;

    }

    return 0;
}