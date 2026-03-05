/*
Kattis: add_two_numbers
*/

#include <iostream>

using namespace std;

int addtwo_by_val(int a, int b)
{
    double sum = a+b;

    a = 99999;
    b = 99999;

    cout << "Addtwo:  a = " << a << ", b = " << b << endl;
    cout << "Addtwo: &a = " << &a << ", &b = " << &b << endl;
    cout << endl;

    return sum;
}

int addtwo_by_ref(int &a, int &b)
{
    double sum = a+b;

    a = 99999;
    b = 99999;

    cout << "Addtwo:  a = " << a << ", b = " << b << endl;
    cout << "Addtwo: &a = " << &a << ", &b = " << &b << endl;
    cout << endl;

    return sum;
}

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";

    cin >> n1 >> n2;

    cout << "Main: n1 = " << n1 << ", n2 = " << n2 << endl;
    cout << "Addtwo: &n1 = " << &n1 << ", &n2 = " << &n2 << endl;
    cout << endl;

    cout << addtwo_by_val(n1, n2) << endl;

    cout << "Main: n1 = " << n1 << ", n2 = " << n2 << endl;
    cout << "Addtwo: &n1 = " << &n1 << ", &n2 = " << &n2 << endl;

    cout << addtwo_by_ref(n1, n2) << endl;
    cout << "Main: n1 = " << n1 << ", n2 = " << n2 << endl;
    cout << "Addtwo: &n1 = " << &n1 << ", &n2 = " << &n2 << endl;

    return 0;
}