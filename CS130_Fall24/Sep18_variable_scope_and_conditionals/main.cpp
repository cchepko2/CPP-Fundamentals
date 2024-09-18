#include <iostream>

using namespace std;

const double c_area = 0.5;

double calc_delta_v(double &velocity, double angle)
{
    // velocity = velocity -1;
    velocity -= 1;

    double dist_so_far = 1;

    return dist_so_far;
}

int main(void)
{
    double velocity = 100.0, angle = 45.0;

    double curr_dist = calc_delta_v(velocity, angle);
    cout << "Current velocity = " << velocity << endl;

    curr_dist = calc_delta_v(velocity, angle);
    cout << "Current velocity = " << velocity << endl;

    curr_dist = calc_delta_v(velocity, angle);
    cout << "Current velocity = " << velocity << endl;

    curr_dist = calc_delta_v(velocity, angle);
    cout << "Current velocity = " << velocity << endl;

    return 0;
}