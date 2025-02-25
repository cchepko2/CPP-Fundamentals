#include <iostream>

using namespace std;

int main()
{
    while(true) // infinite loop until break condition is met
    {
       printf("To inifinity and beyond!\n");
         break;
    }

    for(;;)// infinite loop until break condition is met
    {
        break; // Exits the loop
    }

    char play_again = 'y';

    while(true)
    {
        cout << "Playing the game..." << endl;

        cout << "Do you want to play again? ";
        cin >> play_again;
        if(play_again == 'y')
        {
            continue; // Goes back to beginning of loop, skipping rest of loop
        }

        cout << "Didn't say 'y'" << endl;

        if(play_again != 'y')
        {
            break; // Exits the loop
        }
    }

    return 0;
}