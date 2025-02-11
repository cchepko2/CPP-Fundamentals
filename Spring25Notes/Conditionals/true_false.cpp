#include <iostream>

using namespace std;

int main()
{
    int x=5, y=15;
    float float_val = 5.0;
    float num1 = 0.9, num2=4.1;

    cout << boolalpha << (x>y) << endl;

    cout << ((num1+num2)==float_val) << endl;

    if( x > 1)
    {
        // Code in here executes if the statement is true
        cout << "x is greater then 1\n";    
    } // end if(x>1)

    if( x > 1) // one line in an if statement doesn't need {}
        cout << "x is greater then 1\n";
    // Best practice is to use {} anyway
    
    if(x) // Will evaluate to true if x is non-zero
    {
        cout << "x is not zero\n";
    }

    char play_again = 'n';

    if( play_again != 'n')
    {
        cout << "Not a 'n' means yes!" << endl;
    }
    else
    {
        cout << "Play again sometime..." << endl;
    }

    if( play_again == 'n' and 'N')
    {
        cout << "Not a 'n' means yes!" << endl;
    }
    else
    {
        cout << "Play again sometime..." << endl;
    }
    
    // These are not equivalent statements
    if( play_again != 'n' and play_again != 'N')
    // The line below is incorrent, and 'N' is always true!
    if( play_again != 'n' and 'N')

    return 0;
}