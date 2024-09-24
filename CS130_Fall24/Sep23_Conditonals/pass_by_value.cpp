#include <iostream>

using namespace std;

void add_ten(int number);

int main(void)
{
    int num;

    cout << "Address of number is " << &num << endl;

    cout << "Enter a number: " << endl;
    cin >> num;

    add_ten(num);
    cout << "Number = " << num << endl;

    add_ten(num);
    cout << "Number = " << num << endl;

    return 0;
}

void add_ten(int number)
{
    number += 10;

    cout << "Address of number is " << &number << endl;
}