/*
Print the letter grade based on a score
*/

#include <iostream>

using namespace std;

int main()
{
    int day;

    cout << "Enter the number for the day of the week (1-Monday to 7-Sunday): ";
    cin >> day;

    switch(day)
    {
        case 1:
            cout << "Start the week with a workout.\n";
            break;
        case 2:
            cout << "Work on a personal project.\n";
            break;
        case 3:
            cout << "Mid-week break! Time for a movie night.\n";
            break;
        case 4:
            cout << "Work on a personal project.\n";
            break;
        case 5:
            cout << "Hang out with friends.\n";
            break;
        case 6:
            cout << "Family time! Plan a family activity or outing.\n";
            break;
        case 7:
            cout << "Family time! Plan a family activity or outing.\n";
            break;
        default:
            cout << "Invalid input. Please enter a number from 1 to 7.\n";
            break;
    }

    return 0;
}