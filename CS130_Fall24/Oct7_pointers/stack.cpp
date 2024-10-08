#include <iostream>

using namespace std;

int main(void)
{
    double number = 25, doub_num2;
    int num2 = 10;
    char password[10] = "password";

    cout << "Size of a double is " << sizeof(number) << " bytes." << endl;
    cout << "The address of \"number\" is:" << &number << endl;
    
    
    cout << "Size of a int is " << sizeof(num2) << " bytes." << endl;
    cout << "The address of \"num2\" is:" << &num2 << endl;
    cout << "value pointed to by &num = " << *&*(&num2) << endl;
    cout << "value pointed to by &num = " << num2 << endl;

    cout << "Size of a password is " << sizeof(password) << " bytes." << endl;
    cout << "The address of \"password\" is:" << &password << endl; 

    cout << "A linux or Mac OS will give enough memory to store " 
        << 3*1024*1024/sizeof(number) << " double varibles." << endl;

    

    return 0;
}