/*
Kattis: add_two_numbers
*/

#include <iostream>

using namespace std;

int addtwo(int a, int b)
{
    a += 1;
    b += 1;
    cout << "Addtwo:  n1 = " << a << ", n2 = " << b << endl;
    return a+b;
}

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";

    cin >> n1 >> n2;

    cout << "Main: n1 = " << n1 << ", n2 = " << n2 << endl;

    cout << addtwo(n1, n2) << endl;

    cout << "Main: n1 = " << n1 << ", n2 = " << n2 << endl;

    return 0;
}