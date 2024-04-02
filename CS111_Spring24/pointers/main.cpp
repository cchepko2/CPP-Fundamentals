#include <iostream>

double gravity = 2.6;

int main(void)
{
    int num = 100;
    int num2 = 101;
    int *pint; // All these pointer declarations are equivalent
    int* pint1;
    int * pint2;
    double* const GRAVITY = &gravity;

    std::cout << "Address of num is at " << 
    &num << " and the value is " << *&*&num << std::endl;
    // * dereference an address to access the value
    // & is used to get the address of a value
    pint = &num;
    std::cout << "Value at " << pint << " = " << *pint << std::endl;

    pint = &num2;
    std::cout << "Value at " << pint << " = " << *pint << std::endl;

    double height = 2**GRAVITY*10;

    //GRAVITY = &num;  const pointer cannot change address

    std::cout << "Height = " << height << std::endl;



    return 0;
}