#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(void)
{
    char number1[260] = "3.14159abdfg";
    char intnumber1[260] = "10xgd";
    string number2 = "1.342";
    string int_number2 = "10";

    double converted;
    int converted2;

    converted = atof(number1);  // converts c_string to floating point
    converted2 = atoi(intnumber1); // converts c_string to integer

    cout << converted*converted2 << endl;
    cout << atoi("43543 alphabets") << endl; //reads all leading digits until encountering a space or non-digit character

    converted = stof(number2);
    converted2 = stoi(int_number2);
    cout << converted*converted2 << endl;

    char character = 'A';
    int alpha_letter = 97;
    cout << int(character) << endl;  // prints int integer number representing character
    cout << char(alpha_letter) << endl; // prints charactor from integer

    cout << fixed << setprecision(7) << double(32.33f) << endl;// cast float to double

    int casted = int(converted); // traditional c-style cast
    cout << casted << endl;
    casted = static_cast<int>(converted); // c++ templated static cast
    cout << casted << endl;

    return 0;
}