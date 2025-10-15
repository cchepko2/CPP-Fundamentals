#include <iostream>

using namespace std;

const int num_angles = 11;

void linspace(double begin, double end, int num_points, double angles[]);

int main()
{
    double angles[num_angles];

    // Fill in the angles array with linearly spaced points
    // between 0 and 10, including end points.
    linspace(0, 10, num_angles, angles);

    for(int i=0; i<num_angles; i++)
    {
        cout << angles[i] << ", ";
    }
    cout << endl;

    return 0;
}

void linspace(double begin, double end, int num_points, double angles[])
{
    for(int i=0; i<num_angles; i++)
    {
        double increment = end/(num_angles-1);
        angles[i] = increment*i;
    }
}