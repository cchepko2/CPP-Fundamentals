/*
Print the letter grade based on a score
*/

#include <iostream>

using namespace std;

int main()
{
    char letter_grade;
    float grade;

    cout << "Enter a grade score between 0 and 100: ";
    cin >> grade;
    cout << grade << endl;

    if( grade <= 60)
    {
        letter_grade == 'F';
    }
    else if( grade < 70)
    {
        letter_grade = 'D';
    }
    else if( grade < 80)
    {
        letter_grade = 'C';
    }
    else if( grade < 90)
    {
        letter_grade = 'B';
    }
    else
    {
        letter_grade = 'A';
    }

    cout << "Letter grade = " << letter_grade << endl;

    int number;
    cout << "Enter an Integer number: ";
    cin >> number;
    cout << number << " is " << ((number%2 == 0) ? "even" : "odd");

    return 0;
}