#include <iostream>

#define SIZE 5

using namespace std;

double get_dist(double angle, double velocity);

int main()
{
    double data[SIZE];
    double angles[SIZE];

    double solutions[SIZE];

    for(int i=0; i<=SIZE; i++)
    {
        angles[i] = 90/SIZE*i;
        solutions[i] = get_dist(angles[i], 100.0);
        cout << angles[i] << ' ';
    }
    cout << endl;


    // Print the solutions
    for(auto ans: solutions)
    {
        cout << ans << ' ';
    }
    cout << endl;

/*
    for(double value: data)
    {
        cin >> value;
    }
    cout << endl;
    */ //Will not work for writing values, only reading

    cout << "sizeof(data = " << sizeof(data) << endl;

    for(int i=0; i<sizeof(data)/sizeof(double); i++)
    {
        cin >> data[i];
    }

    for(double value: data)
    {
        cout << value;
    }
    cout << endl;



    return 0;
}

double get_dist(double angle, double velocity)
{
    return angle*velocity;
}