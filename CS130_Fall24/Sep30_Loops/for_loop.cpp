#include <iostream>

using namespace std;

int main(void)
{
    int number = 0;

    for(;number < 10;)  // Infinite loop
    {
        cout << number << " To infinity and beyond!" << endl;
        number++;
    }

    for(int i=0, j=10; i<10 && j>0; i++, j--) // multiple initialization and updation
    {
        cout << i << ' ' << j << endl;
    }

    // example of break and continue
    // comment and uncomment break and continue to see how each works
    for(int i=1; i<=10; i++) {
        cout <<  i << ". Mississippi!\n";
        if( i == 5)
        {
            break;
        }
    
        cout << i << ". Hello World!\n";
        // continue;
    }

    char again = 'n';
    for(;;) // Loop without any parameters is infinite loop
    {
        cout << "I hope you liked the game." << endl
            << "Would you like to play again? (y,n)" << endl;
        cin >> again;
        if(again != 'y')
        {
            break;
        }
    }

    for(;;) // Loop without any parameters is infinite loop
    {
        cout << "I hope you liked the game." << endl
            << "Would you like to play again? (y,n)" << endl;
        cin >> again;
        if(again == 'y')
        {
            continue;  // Go back to top of loop
        }

        cout << "Didn't hit the continue statement." << endl;
        if( again == 'n')
           break;
    }


    return 0;
}