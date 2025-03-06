#include <iostream>

using namespace std;

int i = 10;  // Global variable, available to everything in the file

void print_i(void)
{
    cout << "i = " << i << endl;
}

int main()
{
    int i = -1;  // This i is local to main
    char again = 'n';

    cout << "i = " << i << endl;

    do
    {
        int i = 9;   // This i is local to the do-while loop
        cout << "i = " << i << endl;

    }while(again != 'n'); // loop should operate once

    cout << "i = " << i << endl;

    print_i();

    return 0;
}