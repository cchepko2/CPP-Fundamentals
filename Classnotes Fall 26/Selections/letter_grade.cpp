/*
Letter grade calculator
*/

#include <iostream>

using namespace std;

int main()
{
    double grade;
    char letter;

    cout << "Enter a grade from 0-100: ";
    cin >> grade;

    if(grade <60)
    {
        letter = 'F';
    }
    else if(grade < 70 )
    {
        letter = 'D';
    }
    else if(grade < 80)
    {
        letter = 'C';
    }
    else if(grade < 90)
    {
        letter = 'B';
    }
    else
    {
        letter = 'A';
    }

    cout << "Your grade if a " << letter << endl;

    return 0;
}