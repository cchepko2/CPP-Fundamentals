#include <iostream>

using namespace std;

int main(void)
{
    int input;

    do {
        cout << "Enter a whole number between 1 and 20: ";
        cin >> input;
        cout << "Number is: " << input << endl;
        if (cin.fail()) { // if cin failed; wrong type is entered e.g.
            cin.clear(); // clear the error flag
            cin.ignore(INT_MAX, '\n'); // extract and discard upto INT_MAX characters or upto '\n' in std input stream
            cout << "Invalid input. Try again!\n";
            continue;
        }
        else if (input < 1 || input > 20) {
            cout << "input must be a whole number between 1 and 20\n";
        }
        else break;  // Input is valid and between 1 and 20 (inclusive)
    } while (true);

    return 0;
}