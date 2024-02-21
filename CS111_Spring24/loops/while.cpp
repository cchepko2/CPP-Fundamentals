#include <iostream>


using namespace std;

int main(void)
{
    string phrase = "This is a sentence!";
    char phrase2[260] = "This is another sentence!";
   
    int i=0;
    while(i<259)
    {
        cout << phrase2[i] << ' ';

        i++;
    }

    for(int i=0; i<259; i++)
    {
        cout << phrase2[i] << ' ';
    }

    cout << "\n\n";

    char again = 'y';
    while(true)
    {
        cout << "You win the game!" << endl;

        cout << "\nWant to play again? Enter 'y' to play again." << endl;
        cin >> again;
        if( again == 'y')
        {
            continue;  // Jumps back to beginning of loop
        }
        else
        {
            cout << "Exiting the program and clearing buffers" << endl;
            break;  // This drops us out of the loop
        }
    }

    return 0;
}