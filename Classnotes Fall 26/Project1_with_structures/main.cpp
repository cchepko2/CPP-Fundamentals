#include <iostream>
#include "Cooler_object.h"

using namespace std;

double get_cooler_m3();

int main(int argc, char* argv[])
{
    if (argc > 1 && std::string(argv[1]) == "test") {
        test_conversions();
        return 0;
    }

    Cooler_object drinks;
    double cooler_space = get_cooler_m3();
    
    cout << "Cooler has " << cooler_space << " cubic meters of space." << endl;

    cout << "Enter number of liters of drinks: ";
    cin >> drinks.liters;

    drinks.m3 = liters_to_m3(drinks.liters);

    cout << "You have " << drinks.m3 << " cubic meters of drinks." << endl;

    return 0;
}


double get_cooler_m3()
{
    double m3 = 0;

    do
    {
        cout << "Enter the cubic meters of the cooler: ";
        cin >> m3;
        if(cin.fail())
        {
            cout << "Do better." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    } while (true);
    

    return m3;
}