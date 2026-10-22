#include <iostream>
#include <cassert>
#include "Cooler_object.h"

using namespace std;
//using namespace constants;

double liters_to_m3(double liters)
{
    // Converts liters to cubic meters
    return liters*constants::liters_per_m3;
}

void test_conversions()
{
    double error = 10e-6;

    assert(abs(liters_to_m3(1) - 0.001) < error);
    assert(abs(liters_to_m3(2.5) - 0.0025) < error);

    cerr << "All tests passed!" << endl;
}