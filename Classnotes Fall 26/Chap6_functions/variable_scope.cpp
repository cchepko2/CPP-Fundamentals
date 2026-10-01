// Variable scope

#include <iostream>

using namespace std;

int num1 = 99, num2 = 9999;

int add_two(int &num1, int num2)
{
    num1 = 50;
    cout << "Add_two num1 = " << num1 << endl;
    return num1+num2;
}

int main()
{
    //int num1 = 2;
    int num2 = 4;

    {
        int num1 = 6;

        int total = add_two(num1, num2);

        cout << num1 << endl;
        cout << "total = " << total << endl;
    }
    cout << num1 << endl;

    return 0;
}