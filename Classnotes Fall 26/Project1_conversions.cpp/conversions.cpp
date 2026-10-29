#include <iostream>
#include <cassert>

using namespace std;

const double m3_per_liter = 0.001;

void test();

double quarts_to_m3(double quarts); // Timmy
double liters_to_m3(double liters); // Keenan
double in3_to_m3(double in3); // Max

double m3_to_12ozcans(double m3); // Isaac
double m3_to_in3(double m3); // Shyloh
double m3_to_quarts(double quarts); // Brady

double degf_to_degC(double degf); // Mikey
double degc_to_degf(double degc); // Sam

double m3ice_to_kg(double m3ice); // Lucas
double m3H2O_to_kg(double m3H2O); // Aidan
double m3air_to_kg(double m3air); // Gavin

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
    return liters*m3_per_liter;
}

void test()
{
    double error = 10e-6;

    assert( abs(liters_to_m3(1) - 0.001) < error);
    cerr << "liters to m3 works" << endl;

    cerr << "All tests passed!" << endl;
}