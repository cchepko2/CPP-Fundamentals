#include <iostream>

using namespace std;

int main()
{
    //cout << "The value of i = " << i << endl;
    string units = "feet";

    // gravity declared inside if statement so 
    // local to 'if' and not available outside of the if statement
    if(units == "feet")
    {
        double gravity = 32.2;
    }
    else
    {
        double gravity = 9.81;
    }

    cout << "Using gravity = " << gravity << endl;

    for(int i=1; i<=10; i++) {
        // it's common practice that i, j, k are used as loop counter variables
        // you can use any identifier
        cout <<  i << ". Mississippi!\n";
    }

    //cout << "The value of i = " << i << endl;

    return 0;
}