#include <iostream>

using namespace std;

int main(void)
{
    int values[100] = {0,1,2,3,4,5};  // A way, at declaration, to make an array of all 0s, doesn't work for other values
    float number = 100.5;

    float *p_number = &number;

    cout << "p_number = " << p_number << " and number = " << number << endl;
    cout << "&number = " << &number << " and number = " << *p_number << endl;
    cout << "&number = " << &number << " and number = " << p_number[0] << endl;

    int *point_to_int;  // declaring a pointer, 
                    //which is just a varible that stores an address

    cout << "Address of values is at: " << values << endl;
    cout << "Address of values[1] is at: " << &values[0] << endl;

    cout << "Size of int = " << sizeof(int) << endl;
    cout << "Value of pointer_to_int = " << point_to_int << endl;

    point_to_int = values+1; // pointer arithmetic, adds 
                        //the number times sizoef(type) to number

    cout << "Value of pointer_to_int = " << point_to_int << endl;

    cout << point_to_int[1] << endl;
    cout << values[1] << endl;

    return 0;
}