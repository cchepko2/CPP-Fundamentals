#include <iostream>

using namespace std;

int main(void)
{
    double number = 25, doub_num2;
    
    cout << "Size of a double is " << sizeof(number) << " bytes." << endl;
    cout << "The address of \"number\" is:" << &number << endl;

    cout << "The address of \"doub_num2\" is:" << &doub_num2 << endl;
    cout << "The value of doub_num2 is " << doub_num2 << endl;

    double *ptr_to_doub;
    ptr_to_doub = &number;

    cout << "The value stored at address " << ptr_to_doub << " = "
        << *ptr_to_doub;
    
    ptr_to_doub = &doub_num2;
    *ptr_to_doub = 27;
    // previous line same as this doub_num2 = 27

    cout << "The value of doub_num2 is " << doub_num2 << endl;

    

    return 0;
}