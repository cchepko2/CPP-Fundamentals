#include <iostream>

using namespace std;

const double gravity = 9.81;

int main()
{
    int count;
    // example of break and continue
    // comment and uncomment break and continue to see how each works
    int i;

    for(i=1; i<=10; i++) {
        cout <<  i << ". Mississippi!\n";
        continue;
        cout << i << ". Hello World!\n";
    }
    cout << i << endl;

    char again;
    int score=0;
    while(true)
    {
        cout << "Let's play a game!" << endl;
        score++;

        cout << "Want to play again? {Y/N}: ";
        cin >> again;
        if(again != 'Y' and again != 'y')
        {
            cout << "Thanks for playing" << endl;
            break;
        }
        else
        {
            cout << "Clear score first, or use current score? (Y/N): ";
            cin >> again;
            if(again != 'Y' and again != 'y')
            {
                continue;
            }
        }

        score = 0;
    }

    cout << "Score = " << score << endl;

}

