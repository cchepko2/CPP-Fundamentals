#include <iostream>


struct Projectile_return{
    double distance;
    double max_height;
    double time;
};

using namespace std;

double get_distance(double angle, double speed, Projectile_return &return_vals);

int main(void)
{
    double angle, speed;
    Projectile_return return_vals;

    cout << "Enter an angle (0-90): ";
    cin >> angle;
    cout << "Enter a speed: ";
    cin >> speed;

    double distance = get_distance(angle, speed, return_vals);

    cout << "The projectile went " << distance << " meters." << endl;
    cout << "The max height was: " << return_vals.max_height << endl;
    cout << "The flight time was: " << return_vals.time << endl;
    
    return 0;
}