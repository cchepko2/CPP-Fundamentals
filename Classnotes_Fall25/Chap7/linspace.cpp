#include <iostream>

using namespace std;

//const int num_angles = 11;

void linspace(double begin, double end, const int num_points, double data[]);

int main()
{
    const int num_points = 10;
    double data[num_points];

    // Fill in the angles array with linearly spaced points
    // between 0 and 10, including end points.
    linspace(5, 85, num_points, data);

    for(int i=0; i<num_points; i++)
    {
        cout << data[i] << ", ";
    }
    cout << endl;

    return 0;
}

void linspace(double begin, double end, int num_points, double angles[])
{
    for(int i=0; i<num_points; i++)
    {
        
        double increment = (end-begin)/(num_points-1);
        angles[i] = increment*i + begin;
    }
}