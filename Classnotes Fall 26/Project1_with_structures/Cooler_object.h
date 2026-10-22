#ifndef COOLER_OBJECT_H
#define COOLER_OBJECT_H

void test_conversions();
double quarts_to_m3(double quarts);
double liters_to_m3(double liters);
double in3_to_m3(double in3);
double cans12oz_to_m3(double cans12oz);

double m3_to_cans12oz(double m3);
double m3_to_in3(double m3);

double degf_to_degC(double degf);
double degc_to_degf(double degc);

double m3ice_to_kg(double m3ice);
double m3H2O_to_kg(double m3H2O);
double m3air_to_kg(double m3air);

namespace constants {
    inline constexpr double liters_per_m3 = 0.001;
}

struct Cooler_object {
    double m3;
    double in3;

    double liters;
    double quarts;
    double cans12oz;
    
    double kg;
    double lb;
    
    double degC;
    double degF;
};

#endif