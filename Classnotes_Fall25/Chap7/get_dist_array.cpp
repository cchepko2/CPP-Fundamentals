#include <iostream>

#define SIZE 5

using namespace std;

double get_dist(double angle, double velocity);
void linspace(double begin, double end, int num_points, double angles[]);

const int num_points = 11;

int main()
{
    double distance[num_points];
    double angles[num_points];

    // Fill in angles array
    linspace(0, 90, num_points, angles);

    // For each angle
    for(int i=0; i<num_points; i++)
    {
        distance[i] = get_dist(angles[i], 100.0);
    }
    
    // Print angles:
    for(int i=0; i<num_points; i++)
    {
        cout << angles[i] << ", ";
    }
    cout << endl;


    // Print distances:
    for(int i=0; i<num_points; i++)
    {
        cout << distance[i] << ", ";
    }
    cout << endl;

    return 0;
}

double get_dist(double angle, double velocity)
{
    return angle*velocity;
}

void linspace(double begin, double end, int num_points, double angles[])
{
    for(int i=0; i<num_points; i++)
    {
        double increment = end/(num_points-1);
        angles[i] = increment*i;
    }
}