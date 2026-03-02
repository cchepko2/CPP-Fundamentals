#include <iostream>

using namespace std;

int main()
{
    int number;

    do
    {
        cout << "Enter an integer: ";
        cin >> number;

        if( cin.fail() )
        {
            cin.clear();  // Clear the fail flag
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input. Try again." << endl;
            continue;
        }
        else
        {
            cout << "You entered " << number << endl;
            break;
        }

    } while (true);
    
    

    return 0;
}