#include <iostream>

using namespace std;

int add_two(int n1, int n2)
{
    int total = n1 + n2; // Could just return the results of
                        // the operation directly
    return total;

    //return n1+n2;  Probably a faster way

}

int main()
{
    int sum = add_two(1, 4); // Calling add_two, 
                        // passing two literal values

    cout << "sum = " << sum << endl;

    int number1 = 5, number2 = 7;
    
    sum = add_two(number1, number2);
    cout << "sum = " << sum << endl;

    return 0;
}