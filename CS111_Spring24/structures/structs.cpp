#include <iostream>
#include <cmath>

#define PI 3.1415926

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

double euler_sim(Projectile, Motion);

int main(void)
{
    double speed = 100;
    double angle = 45;

    Motion motion;

    Projectile projectile;
    Projectile *projectile_ptr = &projectile;

    motion.vx = speed*cos(angle*PI/180.0);
    motion.vy = speed*sin(angle*PI/180.0);
    motion.ax = 0;
    motion.ay = 0;

    //Projectile projectile = {1, PI, 2.0, 0.47};

    euler_sim(projectile, motion);

    std::cout << "Projectile-.mass = " << projectile_ptr->mass << std::endl;

}