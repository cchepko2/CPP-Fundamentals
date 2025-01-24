/*
Corin Chepko
1/24/25
Program: cout and sizeof functions
*/

#include <iostream>

using namespace std;

int main(void)
{
    cout << "Hello World" << endl;

    cout << "sizeof(bool) = " << sizeof(bool) << endl 
        << "sizeof(char) = " << sizeof(char) << endl;
    
    cout << "sizeof(int) = " << sizeof(int) << endl 
        << "sizeof(double) = " << sizeof(double) << endl;

    return 0; 
}