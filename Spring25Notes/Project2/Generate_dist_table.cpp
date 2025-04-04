#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

const double G = 9.81; // Gravity in m/s^2
const double FT_TO_M = 0.3048; // 1 foot to meters conversion
const double M_TO_FT = 3.28;   // 1 meter to feet conversion

double calc_dist(double alpha, double muzzle_velocity);

int main() {
    double alpha, muzzle_velocity, target_dist;
    double close_enough = 2.0;
    double max_vel = 100;

    cout << "Enter target distance: ";
    cin >> target_dist;
    
    int num_angles = 30;
    int num_velocities = 30;
    double table[num_angles][num_velocities];
    vector<vector<double>> matches;

    for(int i=1;i<=num_angles; i++)
    {
        alpha = i*90/num_angles;
        for(int j=1;j<=num_velocities;j++)
        {
            muzzle_velocity = j*max_vel/num_velocities;
            table[i-1][j-1] = calc_dist(alpha, muzzle_velocity);
            if(fabs(table[i-1][j-1] - target_dist) <= close_enough)
            {
                matches.push_back({alpha, muzzle_velocity});
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << setw(6) << 0;
    for(int i=1;i<=num_velocities;i++)
    {
        cout << setw(7) << i*max_vel/num_velocities;
    }
    cout << endl;
    for(int i=1;i<=10; i++)
    {
        alpha = i*90/10;
        cout << setw(6) << alpha;
        for(int j=1;j<=10;j++)
        {
            cout << setw(7) << table[i-1][j-1];
        }
        cout << endl;
    }

    cout << "Found " << matches.size() << " target solutions:" << endl;
    for(int i=0;i<matches.size();i++)
    {
        cout << "Angle of " << matches[i][0]
            << " and velocity of " << matches[i][1] << endl;
    }

    return 0;
}

double calc_dist(double alpha, double muzzle_velocity)
{
    // Convert angle to radians
    double alpha_rad = alpha * M_PI / 180.0;

    // Calculate initial velocity components
    double vx = muzzle_velocity * cos(alpha_rad);
    double vy = muzzle_velocity * sin(alpha_rad);

    // Compute flight time
    double flight_time = (vy + sqrt(vy * vy)) / G;

    // Compute max height
    double h_max = (vy * vy) / (2 * G);

    // Compute horizontal distance traveled
    double x_distance = vx * flight_time;

    // Compute max range
    double max_range = (muzzle_velocity * muzzle_velocity * sin(2 * alpha_rad)) / G;
    
    return x_distance;
}