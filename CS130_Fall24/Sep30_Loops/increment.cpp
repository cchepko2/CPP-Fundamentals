#include <iostream>

using namespace std;

int main(void)
{
    int number = 0;

    cout << ++number << endl;

    cout << ++number << endl;

    cout << ++number << endl;

    cout << number << endl;

    for(int i=0; i<10; i++) {
        // it's common practice that i, j, k are used as loop counter variables
        // you can use any identifier
        cout <<  i << ". Mississippi!\n";
    }

    int num_tests;

    cout << "Enter numer of numbers to input: ";
    cin >> num_tests;

    for(int i=0;i<num_tests;i++)
    {
        cin >> number;
        cout << number << endl;
    }


    return 0;
}