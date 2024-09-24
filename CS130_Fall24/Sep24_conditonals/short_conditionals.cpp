#include <iostream>

using namespace std;

// main takes two parameters, first is number of parameter strings,
// second is a pointer to the strings 
int main(int argc, char * argv[])
{
    // argv[0] is first argument which is the program name
    cout << "Name of this program is " << argv[0] << endl;
    if(argc > 1 && string(argv[1]) == "test") // If there is more than one argument to main(), print the second argument
    {
        cout << "Running test function: " << argv[1] << endl;
    }

    int number;
    bool pos_and_even = false;

    cout << "Enter a number: " << endl;
    cin >> number;

    // Short conditional expression (condition) ? expression1 : expression2
    (number > 0 && number%2==0) ? pos_and_even=true : pos_and_even=false;

    cout << "Positive and even = " << boolalpha << pos_and_even << endl;

    return 0;
}