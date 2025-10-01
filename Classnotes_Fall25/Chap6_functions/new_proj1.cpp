#include <iostream>

using namespace std;

double get_dist(double, double); // Function prototype, 
                            // only needs the types, not varible names
                            // although it's ok to include them
// double get_dist(double vel, double angle); // Another way... 
        // Either prototype is fine

int main()
{
    double v = 100, a = 45;
    double distance;

    distance = get_dist(v, a);

    cout << "Distance = " << distance << endl;

    return 0;
}

double get_dist(double vel, double angle)
{
    double dist = vel + angle; // Could just return the results of
                        // the operation directly
    return dist;

    //return n1+n2;  Probably a faster way

}