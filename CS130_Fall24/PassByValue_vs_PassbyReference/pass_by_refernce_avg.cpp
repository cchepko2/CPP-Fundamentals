#include <iostream>

using namespace std;

void calc_avg(int number1, int number2, int &average);

int main(void)
{
    int num1, num2, avg;

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    calc_avg(num1, num2, avg);
    cout << "Average of " << num1 << " and " << num2 << " = " << avg << endl;

    return 0;
}

void calc_avg(int number1, int number2, int &average)
{
    average = (number1+number2)/2;
}