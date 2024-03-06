// Constants
const double g = 9.81; // Acceleration due to gravity (m/s^2)
const double dt = 0.01; // Time step (s)
const double airDensity = 1.225; // Air density at sea level (kg/m^3)
const double dragCoefficient = 0.47; // Drag coefficient for a sphere
const double radius = 0.1; // Radius of the projectile (m)
const double area = M_PI * radius * radius; // Cross-sectional area (m^2)
const double mass = 1.0; // Mass of the projectile (kg)

// Function to calculate the acceleration due to air resistance
void airResistance(double vx, double vy, double &ax, double &ay) {
    double speed = std::sqrt(vx * vx + vy * vy);
    double force = 0.5 * airDensity * dragCoefficient * area * speed * speed;
    double ax = -force / mass * (vx / speed);
    double ay = -force / mass * (vy / speed);
 
}