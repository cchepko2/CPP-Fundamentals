#include <iostream>

using namespace std;

int main()
{
    string units;

    cout << "Enter units (feet, meters): ";

    cin >> units;
    // repeat while units are invalid
    while(units != "feet" and units != "meters")
    {
        cout << "Please enter valid units, feet or meters: ";
        cin >> units;
    }

    cout << "Units are " << units << endl;

    return 0;
}