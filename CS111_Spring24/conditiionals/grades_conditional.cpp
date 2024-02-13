#include <iostream>


using namespace std;

int main(void)
{
    float grade = 83.4;
    int num;
    char letter;

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
    else{
        letter = 'F';
    }
    
    cout << "Grade of " << grade << " is a " << letter << endl; 

    if(grade >= 50) // This set of conditionals is out of order to get the correct grade
    {
        letter = 'F';
    }
    else if(grade >= 60)
    {
        letter = 'D';
    }
    else if(grade >= 70)
    {
        letter = 'C';
    }
    else if(grade >= 80)
    {
        letter = 'B';
    }
    else{
        letter = 'A';
    }
    
    cout << "Grade of " << grade << " is a " << letter << endl;


    // a program that determines if a given number is 0, even or odd and positive or negative
    // the order of condition doesn't matter in this example
    cout << "enter a whole number: ";
    cin >> num;
    if (num > 0) {
        cout << num << " is positive ";
        // check if the number is even or odd
        if (num %2 == 0)
            cout << "and even\n";
        else
            cout << "and odd\n";
    }
    else if (num < 0) {
        cout << num << " is negative ";
        
        // check if the number is even or odd
        if (num %2 == 0)  
            cout << "and even\n";  // With a one-line conditional, squqqly braces are not required, but it's sloppy programming
        else
        {   // In general, even with a one line statement, use the braces
            cout << "and odd\n";
        }
    }
    else
        cout << "the entered number is 0\n";

    cout << "Good bye!";


    (num % 2) ? (cout << "Odd") : (cout << "Even");
    // if num%2 == , output Odd, otherwise Even



    if( num%2 == 0 && num > 0)
    {
        cout << "num is positive and even" << endl;
    }

    char has_ferrari;
    float savings;
    cout << "Do you own a Ferarrai? Enter [y|yes]: ";
    cin >> has_ferrari;
    cout << "How much in savings do you have in dollars? ";
    cin >> savings;
    if (has_ferrari == "yes" or has_ferrari == "y" or savings >= 1000000)
        cout << "Congratulations, you can retire now!\n";
    else
        cout << "Sorry, no cigar! Keep working...\n";


    return 0;   // Return is the ending of a function, in this case main, 
                // when a return statement is hit, the program will end
}