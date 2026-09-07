/*
Corin Chepko
9/7/26
Chap 2 notes, input
*/

#include <iostream>

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
    
    getline(cin, full_name);
    cout << "name is " << full_name << endl;
    
    return 0;
}