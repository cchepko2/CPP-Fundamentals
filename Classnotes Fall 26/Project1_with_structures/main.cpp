#include <iostream>
#include "Cooler_object.h"

using namespace std;

int main(int argc, char* argv[])
{
    if (argc > 1 && std::string(argv[1]) == "test") {
        test_conversions();
        return 0;
    }

    Cooler_object drinks;

    cout << "Enter number of liters of drinks: ";
    cin >> drinks.liters;

    drinks.m3 = liters_to_m3(drinks.liters);

    cout << "You have " << drinks.m3 << " cubic meters of drinks." << endl;

    return 0;
}