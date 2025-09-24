#include <iostream>

using namespace std;

int main()
{
    char again = 'y';
    string again_again = "yes";

    //while(again == 'y')
    while(again_again == "yes" or again_again[0] == 'y')
    {
        cout << "TO INFINITY AND BEYOND!!!" << endl;

        cout << "Play again? (Enter 'y' for yes)";
        //cin >> again;
        continue; // The loop stops here, goes back to the beginning
        break;  // If the continue wasn't before me, I'd stop the loop here


        getline(cin, again_again);
    }

    return 0;
}