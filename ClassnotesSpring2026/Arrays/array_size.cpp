#include <iostream>

using namespace std;

double average(double array[], int num_elements);

int main()
{
    double numbers[] = {1, 2, 3, 4, 5};

    cout << sizeof(numbers) << " = size in bytes of array." << endl;
    cout << sizeof(numbers)/sizeof(int) << " = number of elements." << endl;
    cout << sizeof(numbers)/sizeof(numbers[0]) << " = number of elements." << endl;

    int number_of_elements = sizeof(numbers)/sizeof(numbers[0]);

    for(int i=0; i<number_of_elements; i++)
    {
        cout << "Number #" << i << " = " << numbers[i] << endl;
    }


    double avg = average(numbers, number_of_elements);

    cout << "Average = " << avg << endl;

    cout << "Address of first element = " << numbers << endl;
    cout << "Address of first element = " << &numbers[0] << endl;

    cout << "Value of first element = " << numbers[0] << endl;
    cout << "Value of first element = " << *&numbers[0] << endl;

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