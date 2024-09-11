#include <iostream>

using namespace std;

// addTwo - Fuitfull function...takes two int arguments, returns int
int addTwo(int &num1, int &num2)
{
    int answer;

    cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
    cout << "num1 is at " << &num1 << " and num2 is at " << &num2 << endl;

    answer = num1 + num2;

    num1 = 25;

    return answer;
   //return num1+num2; 
} 

int main(void)
{
    int a, b;

    cin >> a >> b;

    cout << "a = " << a << " and b = " << b << endl;
    cout << "a is at " << &a << " and b is at " << &b << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;

    int sum;
    sum = addTwo(a,b);
    //cout << a+b << endl;
    cout << sum << endl;

    cout << "a = " << a << " and b = " << b << endl;

    return 0;
}