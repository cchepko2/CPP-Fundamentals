#include <iostream>

using namespace std;

int main(void)
{
    double number1 = 25, number2;
    
    double * ptr_double;  // pointer variable can take address of any double value

    ptr_double = &number1; // Assign the address of number1 to pointer
    
    cout << endl << endl;

    cout << "Value at " << ptr_double << " = " << *ptr_double << endl;

    ptr_double = &number2;

    cout << dec << "Value at " << ptr_double << " = " << *ptr_double << endl;
    *ptr_double = 72.2425;

    cout << "Value at " << ptr_double << " = " << *ptr_double << endl;

    ptr_double += 1;  // Pointer arithmatic increments or 
                    //decrements by sizeof the type of pointer
                    // in this case, for a double, it increments by 8
    cout << "Value at " << ptr_double << " = " << *ptr_double << endl;

    return 0;
}