#include <iostream>

using namespace std;

double input_validation(string message)
{
    double value;

    cout << "Enter " << message << ":";

    do
    {
        cin >> value;

        if(cin.fail())
        {
            cout << "Please enter ." << message << endl;
            cin.clear();
            cin.ignore(100000, '\n');
            continue;
        }
        else
        {
            break;
        }
        
    } while (true);
    
    return value;
}

int main()
{
    double pounds_ice = input_validation("pounds of ice");

    cout << "You have " << pounds_ice << " pounds of ice." << endl;
    
    return 0;
}