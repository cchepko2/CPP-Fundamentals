#include <iostream>

using namespace std;

int main()
{
    int num1;
    char a, b;

    string name;    

    cout << "Enter a number and a character: ";
    // if user types two values separted by a space or 'enter', both
    // variables will be populated
    /*cin >> num1 >> a;

    cout << "num1 = " << num1 << endl;
    cout << "Character = " << a << endl;
    cout << "Character b = " << b << endl;

    cout << "Please enter your first and last name: ";
    cin >> name;

    // cin will stop reading at a space, so will not read a full name
    cout << "Hello " << name << '!' << endl;

    cout << "Try again: ";
    getline(cin, name);
    cout << "Hello " << name << "!";

    char middleInitial;
    cin >> middleInitial;

    cout << "The middle initial is " << middleInitial << endl;*/

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Your number was " << num1 << endl;

    // If you do a cin before a getline, you need to toss the '\n'
    // hanging in the stream...
    cin.ignore(1000, '\n');

    cin.get();

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name << "!" << endl;

    return 0;
}