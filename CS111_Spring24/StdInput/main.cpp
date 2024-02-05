#include <iostream>

using namespace std;

int main(void)
{
    int int_num = 0;
    int int_num2;
    double double_num;
    char c_string[260];
    string lname;

    cout << "Enter three numbers (last can be double): \n";
    cin >> int_num >> int_num2  >> double_num;

    cout << "int_num = " << int_num << endl;
    cout << "int_num2 = " << int_num2 << endl;
    cout << "double_num = " << double_num << endl;

    cout << "Enter you name: ";
    cin >> c_string >> lname;
    cout << "Hello " << c_string << ' ' << lname << '!' << endl;

    cout << "Press ENTER to continue..." << endl;
    cin.ignore(1000, '\n'); //ignores and discards number of characters in stream until specified character is reached
    // Now we can proceed with a getline() and it'll collect the whole line
    // a cin.get() will also discard the hangling '\n' character in input stream
    string phrase;
    getline(cin, phrase);
    cout << phrase;

    int time;
    cout << "Enter a time in minutes: ";
    cin >> time;
    int hours = time/60;
    int minutes = time%60; //remainder of time/60

    cout << time << " hours = " << hours << " and " << minutes << "minutes.\n";


    return 0;
}