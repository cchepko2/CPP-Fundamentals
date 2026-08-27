#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{

    int number = 2^8; // This is NOT 2 to power of 8, it is 2 OR 8
    cout << "Number = 2^8 = 2 OR 8 = " << number << endl;
    
    number = pow(2, 8); // I've already decleared my varible "number",
                        // so I don't need to re-declare the type

    cout << "Number = 2 to the power of 8 = " << number << endl;                   

    cout << "Hello World" << endl;
    cout << "Number = " << number << endl;

    cout << "Sizeof varibles: " << endl;
    cout << "bool size = " << sizeof(bool) << endl;
    cout << "char size = " << sizeof(char) << endl;
    cout << "int size = " << sizeof(int) << endl;
    cout << "float size = " << sizeof(float) << endl;
    cout << "double size = " << sizeof(double) << endl;

    number = 0b1011;
    cout << "number = 0b1011 = " << number << endl;

    number = 0x11;
    cout << "number = 0x11 = " << number << endl;

    cout << "0x7F = " << 0x7f << endl;

}