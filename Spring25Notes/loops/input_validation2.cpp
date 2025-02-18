#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string units;
    double distance = 3.11892479845;

    cout << "Enter units (feet, meters): ";

    do
    {
        cout << "Please enter valid units, feet or meters: ";
        cin >> units;    
    } while(units != "feet" and units != "meters");

    cout << "Units are " << units << endl;

    // print distance to 2 decimal places
    cout << fixed << setprecision(2) << distance << endl;
    printf("%.2f", distance);

    return 0;
}