#include <iostream>

using namespace std;

struct Projectile
{
    double radius;
    double area;
    double mass;
    double drag_coeff;
};

struct Motion
{
    double vx;
    double vy;
    double ax;
    double ay;
};

Motion euler_sim(Projectile projectile, Motion motion)
{
    cout << "Mass is " << projectile.mass << endl;
    cout << "Going " << motion.vx << 
        " meters per second in the horizantal direction." << endl;

    return motion;
}