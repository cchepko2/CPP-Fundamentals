/*
Corin Chepko
9/7/26
Chap 2 notes, input
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int int_number;
    char character;
    double floating_number;
    string more_than_one_char;
    string full_name;

    cout << "Enter 2 numbers: " << endl;
    cin >> int_number >> floating_number;

    cout << "int_number = " << int_number << endl;
    cout << "floating_number = " << floating_number << endl;

    cout << "Enter a character and and string: " << endl;
    cin >> character >> more_than_one_char;

    cout << "character = " << character << endl;
    cout << "more_than_one_char = " << more_than_one_char << endl;
    
    cout << "Enter full name: ";
    //cin >> full_name;
    cin >> ws;
    cin.ignore(1000, '\n');
    
    getline(cin, full_name);
    cout << "name is " << full_name << endl;

    cout << "Enter a key to quit: " << endl;

    cin.get();
    
    return 0;
}