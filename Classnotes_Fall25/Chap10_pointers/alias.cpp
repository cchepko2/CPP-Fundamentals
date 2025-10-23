/*
Use pointers to point to different variables
*/

#include <iostream>

using namespace std;

int main()
{
    double number = 3.14159;
    double another_number = 2.78;

    double *pointer_to_double;

    // assign an address to pointer
    pointer_to_double = &number;

    cout << "Address of number = " << &number << endl;
    cout << "Value of pointer = " << pointer_to_double << endl;
    cout << "Value of number = " << number << endl;
    cout << "Value held at pointer address = " 
                << *pointer_to_double << endl;

    pointer_to_double = &another_number;
    cout << "Address of another_number = " << &another_number << endl;
    cout << "Value of pointer = " << pointer_to_double << endl;
    cout << "Value of another_number = " << another_number << endl;
    cout << "Value held at pointer address = " 
                << *pointer_to_double << endl;

    cout << "Difference between addresses = " << (&number - &another_number) << endl;


    return 0;
}