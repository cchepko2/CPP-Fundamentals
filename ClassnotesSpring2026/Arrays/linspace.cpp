#include <iostream>

using namespace std;


void linspace_cpp(double start, double end, 
        int num_elements, double lin_vals[]);

int main()
{
    int num_elements;
    double start, end;

    cout << "Enter the start, stop, and number of elements: ";
    
    cin >> start >> end >> num_elements;

    double lin_vals[num_elements];

    linspace_cpp(start, end, num_elements, lin_vals);

    for(int i=0; i<num_elements; i++)
    {
        cout << lin_vals[i] << ", ";
    }
    cout << endl;

    return 0;
}

void linspace_cpp(double start, double end, 
        int num_elements, double lin_vals[])
{
    double inc = (end-start)/(num_elements-1);

    for(int i=0; i<num_elements; i++)
    {
        lin_vals[i] = start + i*inc;
    }
}