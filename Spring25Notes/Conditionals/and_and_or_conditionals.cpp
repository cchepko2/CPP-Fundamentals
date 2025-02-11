/*
Print the letter grade based on a score
*/

#include <iostream>

using namespace std;

int main()
{
    float gpa = 3.6;
    int service_hours = 51;

    if(gpa > 3.5)
    {
        if( service_hours > 50)
        {
            cout << "You're in!\n";
        }
    }

    // Equivalent conditional as above
    if(gpa > 3.5 && service_hours > 50)
    if(gpa > 3.5 and service_hours > 50)
    {
        cout << "You're in!\n";
    }

    if(gpa > 3.5 or service_hours > 50)
    {
        cout << "Got either the gpa or hours or both\n";
    }

    char play_again = 'n';

    cout << "Do you want to play again?";
    cin >> play_again;

    // The commented conditional always evaluates to true
    // if( play_again == 'n' or 'N') just 'N' is basically True
    if( play_again == 'n' or play_again == 'N')
    {
        cout << "Game Over. Goodbye!\n";
    }
    else
    {
        cout << "Playing again...\n";
    }


    return 0;
}