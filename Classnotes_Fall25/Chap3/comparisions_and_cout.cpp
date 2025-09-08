#include <iostream>

using namespace std;

int main()
{
    int x=15, y=10;

    cout << (x==y) << endl;
    // Can add an argument to cout so true/false are printed as "true" "false"
    cout << boolalpha << (x==y) << endl;
    cout << (x<y) << endl;
    
    // Turn off boolalpha printing
    cout << noboolalpha << (x==y) << endl;
    cout << (x<y) << endl;

    cout << hex << "x in hex = " << x << endl;
    // Make next cout print varibles in decimal
    cout << dec;
    cout << "y in hex = " << y << endl;


    if( x < y )
    {
        cout << "x is less than y" << endl;
    }

    x = -1;
    if(x)
    {
        cout << "x is true (not zero)" << endl;
    }
    else
    {
        cout << "x is zero (false)" << endl;
    }

    int num;
    // determine if a given number is 0, positive, or negative
    cout << "enter a whole number: ";
    cin >> num;
    if (num > 0)
        // if a block has only one statment; {} can be ignored!
        cout << num << " is positive\n";
    else if (num < 0)
        cout << num << " is negative\n";
    else
        cout << "the entered number is 0\n";

    cout << "Good bye!" << endl;


    x = 10;
    y = 5;

    char letter = 'D';
    // Always use full comparisions in if statements to avoid this mistake...
    if(letter == 'Y' || 'y')  // This is always true
    {
        cout << "This if statement is always true." << endl;
    }

    letter = 'y';
    //Do this instead
    if(letter == 'Y' || letter == 'y')  // This is always true
    {
        cout << "This if statement is not always true." << endl;
    }

    return 0;
}