/*
Structures declaration and use
*/


#include <iostream>

using namespace std;

struct PROJECTILE {
     double mass;
     double radius;
     double distance;
     double time;
     double height;
    };

void get_distance(PROJECTILE &projectile);

int main()
{
    string name = "Corin";
    PROJECTILE Projectile1; 

    Projectile1.mass = 5.0;
    Projectile1.radius = 0.5;

    cout << "Mass = " << Projectile1.mass << endl;
    cout << "Radius = " << Projectile1.radius << endl;

    get_distance(Projectile1);

    cout << "Distance traveled = " << Projectile1.distance << endl;
    cout << "Height = " << Projectile1.distance << endl;
    cout << "Flight time = " << Projectile1.distance << endl;


    return 0;
}

void get_distance(PROJECTILE &projectile)
{
    // Do the calculations
    projectile.distance = 1018.2;
    projectile.height = 10.0;
    projectile.time = 14.0;
}