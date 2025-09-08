#include <iostream>

using namespace std;

int main()
{
    int grade;
    char letter;

    cout << "Enter a whole number grade: " << endl;
    cin >> grade;

    if(grade >= 90)
    {
        letter = 'A';
    }
    else if(grade >= 80)
    {
        letter = 'B';
    }
    else if(grade >= 70)
    {
        letter = 'C';
    }
    else if(grade >= 60)
    {
        letter = 'D';
    }
    else
    {
        letter = 'F';
    }

    cout << "A grade of " << grade << " is a " << letter << endl;

    

    return 0;
}