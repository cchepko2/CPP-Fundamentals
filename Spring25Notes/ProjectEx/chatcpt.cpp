#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double G = 9.81; // Gravity in m/s^2
const double FT_TO_M = 0.3048; // 1 foot to meters conversion
const double M_TO_FT = 3.28;   // 1 meter to feet conversion

int main() {
    char unit_choice;
    double h_initial, alpha, muzzle_velocity, target_distance;
    bool in_feet = false;

    // Ask for unit preference
    cout << "Enter units (m for meters, f for feet): ";
    cin >> unit_choice;
    if (unit_choice == 'f' || unit_choice == 'F') {
        in_feet = true;
    }

    // Get user input
    cout << "Enter initial height (" << (in_feet ? "feet" : "meters") << "): ";
    cin >> h_initial;
    cout << "Enter launch angle (degrees, between 0 and 90): ";
    cin >> alpha;
    cout << "Enter muzzle velocity (" << (in_feet ? "feet/sec" : "meters/sec") << "): ";
    cin >> muzzle_velocity;
    cout << "Enter target distance (" << (in_feet ? "feet" : "meters") << "): ";
    cin >> target_distance;

    // Convert values to meters if necessary
    if (in_feet) {
        h_initial *= FT_TO_M;
        muzzle_velocity *= FT_TO_M;
        target_distance *= FT_TO_M;
    }

    // Convert angle to radians
    double alpha_rad = alpha * M_PI / 180.0;

    // Calculate initial velocity components
    double vx = muzzle_velocity * cos(alpha_rad);
    double vy = muzzle_velocity * sin(alpha_rad);

    // Compute flight time
    double flight_time = (vy + sqrt(vy * vy + 2 * G * h_initial)) / G;

    // Compute max height
    double h_max = h_initial + (vy * vy) / (2 * G);

    // Compute horizontal distance traveled
    double x_distance = vx * flight_time;

    // Compute max range
    double max_range = (muzzle_velocity * muzzle_velocity * sin(2 * alpha_rad)) / G;

    // Convert results to feet if necessary
    double h_max_ft = h_max * M_TO_FT;
    double x_distance_ft = x_distance * M_TO_FT;
    double max_range_ft = max_range * M_TO_FT;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nResults:" << endl;
    cout << "Flight time: " << flight_time << " seconds" << endl;
    cout << "Maximum height: " << h_max << " meters (" << h_max_ft << " feet)" << endl;
    cout << "Horizontal distance traveled: " << x_distance << " meters (" << x_distance_ft << " feet)" << endl;
    cout << "Maximum range: " << max_range << " meters (" << max_range_ft << " feet)" << endl;

    // Check if the target is within range
    if (target_distance <= max_range) {
        cout << "The target is within range." << endl;
    } else {
        cout << "The target is out of range." << endl;
    }

    return 0;
}