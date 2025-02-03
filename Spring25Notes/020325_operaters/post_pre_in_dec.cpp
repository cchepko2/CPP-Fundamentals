#include <iostream>

using namespace std;

int main()
{
    int number = 5;

    cout << number++ << endl;
    cout << number << endl;

    number = 5;
    cout << number++ * number - --number << endl;

    int num1 = 4, num2 = 5;
    float avg = (num1+num2)/2;

    // Need to add a 2. or 2.0 to force floating point math
    cout << "avg of " << num1 << " and " << num2 << " = " 
        << avg << ", whoops, I meant " << (num1+num2)/2. << endl;

    return 0;
}