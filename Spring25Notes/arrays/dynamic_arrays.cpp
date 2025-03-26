#include <iostream>

using namespace std;

int main(void)
{
    int numbers[42]; // Creates a static array of 42 integers

    numbers[0] = 42;

    // Creates a dynamic array of 42 integers
    int *numbers2 = new int[42];

    // An array name without an index is just the 
    // memory address of the beginning of the array
    cout << numbers << " AKA " << &numbers[0] << endl;
    cout << "The next number is at " << &numbers[1] << endl;
    cout << numbers2 << endl;

    int *alias = &numbers[0];
    cout << "numbers[0] = " << numbers[0] << endl;
    cout << "alias[0] = " << alias[0] << endl;

    alias[0] = 99;
    cout << "numbers[0] = " << numbers[0] << endl;
    cout << "alias[0] = " << alias[0] << endl;

    // Need to clean up memory
    delete [] numbers2;

    return 0;
}