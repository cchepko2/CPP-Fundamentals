/*
Use pointers to point to different variables
*/

#include <iostream>

using namespace std;

int main()
{
    // array of 5 doubles
    double numbers[5] = {3.14159, 2, 3, 4, 5};

    // pointer to double, assign it address of first value in array
    double *ptr_to_array = numbers;

    // The '*' and '&' undo either other. In other words, *&number = number
    cout << "Value of first number in array = " << *&*&*&*ptr_to_array << endl;
    
    for(int i=0; i<sizeof(numbers)/sizeof(double); i++)
    {
        cout << "number[" << i << "] = " << *(ptr_to_array+i) << endl;
    }

    return 0;
}