#include <iostream>

struct Cooler_Object
{
    double kgice;
    double m3ice;
    double tempice;

    double heat_capicity;
    double density;

};

using namespace std;

double get_cooler_m3();
//void get_ice(double &kgice, double &m3ice, double &tempice);
void get_ice(Cooler_Object &ice_object);
void get_ice(double &kgice, double &m3ice, double &tempice);
void get_h2O(double &kgice, double &m3ice, double &tempice);

int main()
{
    double m3_cooler;
    //double kgice, kgwater, kgair, m3ice, m3air, m3ewater, tempice, tempwater, tempair;
    Cooler_Object ice, water, air;

    m3_cooler = get_cooler_m3();

    get_ice(ice);
    get_h20(kgwater, m3water, tempwater);

     cout << "Cooler has " << m3_cooler << " cubic meters." << endl;

    return 0;
}

void get_ice(Cooler_Object &ice)
{
    ice.density = 1000;
    ice.m3ice = 0.5;
    ice.tempice = 0;
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

double get_h2O(double &kgice, double &m3ice, double &tempice)
{
    double number = 0;
    char unit;

    do
    {
        cout << "Enter number and type of units (2 quarts): ";
        cin >> number;
        cin >> unit;

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