#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(void)
{
    string fname, lname, phrase;
    int age;

    cout << "Enter full name and age: " << endl;

    //cin >> fname >> lname >> age;
    getline(cin, phrase);

    istringstream iss(phrase); // Create an input string stream 
                // varible (which will act likea special cin), 
                // pass the phrase string in to process
    cout << phrase << endl;
    iss >> fname >> lname >> age;

    cout << "Hello " << fname << ' ' << lname << 
        ", says here you are " << age << " years old." << endl;

    cout << setw(40) << setfill('=') << ' ' << endl;
    cout << setfill(' ') << setw(15) << left << fname << setw(20) << left << lname << setw(5) << age << endl;
    // setw(X) means the next output will be formatted in a space X spaces wide, 
    // right aligned by default. Any empty characters are filled by the setfill character
    cout << setw(10) << ' ' << endl;

    printf("Hello %s, nice to meet you. Says herre you are %d years old.", fname.c_str());
    // %s is for a c_string, %d is for an integer, %f would be for a floating point number, 
    // the c++ string had to be converted to a c-string for the prinf() to work with it
    return 0;
}