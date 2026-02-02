#include <iostream>

using namespace std;

int main(void)
{
    int student_id;
    double floating_number;
    string name;
    int dummy;

    cout << "Enter student_id, favorite number, and name: ";

    cin >> student_id >> floating_number;

    // Get a line of input, including spaces, until a newline character is read
    // put the data into the name variable
    
    // Anytime there is a cin before a getline, use a cin.ignore to 
    // clear the newline character
    cin.ignore(CHAR_MAX, '\n');
    getline(cin, name);

    cout << "ID #: " << student_id << endl;
    cout << "Favorite #: " << floating_number << endl;
    cout << "Name: " << name << endl;


    int i = 0;
    // increment i
    i = i+1;
    // increment i
    i += 1;
    // increment i by 1
    i++;
    ++i;


    return 0;
}