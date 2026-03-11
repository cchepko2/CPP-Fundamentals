#include <iostream>

using namespace std;

double average(double array[], int num_elements);

int main()
{
    
    double numbers[] = {1, 2, 3, 4, 5};

    for(auto element: numbers)
    {
        cout << "The element is " << element << endl;
    }
    cout << endl;

    return 0;
}

double average(double array[], int num_elements)
{
    double average = 0;

    cout << "Address of array: " << array << endl;

    for(int i=0; i<num_elements; i++)
    {
        average += array[i];
    }

    return average/num_elements;
}