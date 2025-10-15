#include <iostream>

#define SIZE 5

using namespace std;

double get_dist(double angle, double velocity);
void linspace(double begin, double end, int num_points, double angles[]);
void print_values(double first[], double second[], int num_points);

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
    
    print_values(angles, distance, num_points);

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

void print_values(double first[], double second[], int num_points)
{
    // Print angles:
    for(int i=0; i<num_points; i++)
    {
        cout << first[i] << ", ";
    }
    cout << endl;

    // Print distances:
    for(int i=0; i<num_points; i++)
    {
        cout << second[i] << ", ";
    }
    cout << endl;
}