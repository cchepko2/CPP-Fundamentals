/*
Example program for calulating a projectile 
*/

#include <iostream>
#include <iomanip>
#include <cmath>

// Constants
const double g = 9.81; // Acceleration due to gravity (m/s^2)
const double dt = 0.01; // Time step (s)
const double airDensity = 1.225; // Air density at sea level (kg/m^3)
const double dragCoefficient = 0.47; // Drag coefficient for a sphere
const double radius = 0.3; // Radius of the projectile (m)
const double area = M_PI * radius * radius; // Cross-sectional area (m^2)
const double mass = 3.0; // Mass of the projectile (kg)
// Function to calculate the acceleration due to air resistance

void airResistance(double vx, double vy, double &ax, double &ay) 
{
    double speed = std::sqrt(vx * vx + vy * vy);
    double force = 0.5 * airDensity * dragCoefficient * area * speed * speed;
    ax = -force / mass * (vx / speed);
    ay = -force / mass * (vy / speed);
}

int main() {

    // Initial conditions

    double x = 0, y = 0, time=0, ax=0, ay=0, max_height = 0; // Initial position (m)
    double angle = 45; // Launch angle (degrees)
    double speed = 100; // Initial speed (m/s)
    double vx = speed * std::cos(angle * M_PI / 180);
    double vy = speed * std::sin(angle * M_PI / 180);

    int step_num=0;
    // Simulation loop
    while (y >= 0) 
    {
        // Update position
        x += vx * dt;
        y += vy * dt;

        // Calculate acceleration due to air resistance
        airResistance(vx, vy, ax, ay);
        //ax = 0;  // make air resistance zero
        //ay = 0;  // make air resistance zero

        // Update velocity
        vx += ax * dt;
        vy += (ay - g) * dt; // Include gravity

        // Output the current position
        std::cout << "Position: (" << x << ", " << y << ")" << ", Time: " << time << std::endl;
        
        //Or plot an asterisk
        /*step_num++;
        if(step_num%2 == 0)
        {
            std::cout << std::setw((int)(y*50/37.0)) << '*' 
            << std::setw(5) << std::fixed << std::setprecision(1) 
            << y << std::endl;
        }*/

        time += dt;
        if(y > max_height)
        {
            max_height = y;
        }

        // Break if the projectile hits the ground
        if (y < 0) break;

    }  // End while
    std::cout << "Max height: " << max_height << std::endl;
    std::cout << area << std::endl;
    return 0;
}