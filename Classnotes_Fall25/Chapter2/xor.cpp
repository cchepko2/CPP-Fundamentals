#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int x = 2, y = 3;

    // This is an XOR, not an exponent calculation
    cout << "x^y" << " = " << (x^y) << endl;

    // Calculate the exponent:
    cout << "x^y" << " = " << pow(x, y) << endl;


    return 0;
}