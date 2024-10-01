#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)
{
    while(true) // Infinite while loop
    {
        cout << "Let's play Hangman!" << endl;

        cout << "That was fun, do you want to play again? (y,n)";

        char yes_no;
        cin >> yes_no;

        if( yes_no != 'y')  // don;t want to play again
        {
            break;
        }

    }

    char yes_no = 'y';
    // Same loop but with different condition
    while(yes_no == 'y') // Infinite while loop
    {
        cout << "Let's play Hangman!" << endl;

        cout << "That was fun, do you want to play again? (y,n)";

        cin >> yes_no;

    }


    cout << "x\tlog(x)\tlog2(x)\tlog10(x)\n";
    cout << setw(35) << setfill('=') << "\n";
    cout << fixed << setprecision(4);
    
    int x = 1; // while loop initialization
    while(x <= 10) {
        // natural log base e, base 2 and base 10
        cout << x << '\t' << log(x) << '\t' << log2(x) << '\t' << log10(x) << endl;
        x += 1; // update loop variable
    }

    return 0;
}