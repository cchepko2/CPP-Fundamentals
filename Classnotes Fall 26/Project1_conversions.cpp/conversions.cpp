#include <iostream>
#include <cassert>

using namespace std;

const double l_m3 = 0.001;

void test();

double quarts_to_m3(double quarts);
double liters_to_m3(double liters);
double in3_to_m3(double in3);

double m3_to_12ozcans(double m3);
double m3_to_in3(double m3);

double degf_to_degC(double degf);
double degc_to_degf(double degc);

double m3ice_to_kg(double m3ice);
double m3H2O_to_kg(double m3H2O);
double m3air_to_kg(double m3air);

int main()
{
    test();
    
    double m3_of_liters;

    cout << "Enter number of liters: ";
    cin >> m3_of_liters;

    cout << "You have " << liters_to_m3(m3_of_liters) 
        << " cubic meters." << endl;

    return 0;
}

double liters_to_m3(double liters)
{
    // Converts liters to cubic meters
    return liters*l_m3;
}

void test()
{
    assert(liters_to_m3(1) == 0.001);
}