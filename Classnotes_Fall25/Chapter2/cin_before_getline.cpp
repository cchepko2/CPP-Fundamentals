#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num1;
    
    string name;
    string full_name;    

    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello " << name << "!" << endl;
    printf("Hello %s!\n", name.c_str());

    cout << "Enter your FULL name: ";
    // Collect input, including spaces, from console input to variable full_name
    cin.ignore(1000, '\n');
    getline(cin, full_name);
    cout << "Hello Mr. " << full_name << endl;
    printf("Hello Mr. %s\n", full_name.c_str());


    cout << "Press ENTER to exit: ";
    cin.get();

    return 0;
}