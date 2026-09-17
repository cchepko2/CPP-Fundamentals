#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string messageA = "Corin";
    string messageB = "Chepko";

    double number = 99.99;
    double number2 = 87.324;

    string fullname = messageA + ' ' + messageB;
    string grade_message = fullname + " got a grade of " + to_string(number);

    cout << fullname << endl;
    cout << grade_message << endl;

    cout << "The length of fullname is: " << fullname.length() << endl;

    cout << "The first character in the fullname is " << fullname[0] << endl;
    cout << "The last character in the fullname is " << fullname[fullname.length()-1] << endl;    

    cout << max(number, number2) << endl;
    printf("The max between %f and %f is %f\n", number, number2, max(number, number2));
    cout << "The max between " << number << " and " << number2 << " is " << max(number, number2) << endl;

    double angle_degrees = 30;
    double radians = angle_degrees*M_PI/180.0;
    printf("The sin of %f degrees = %f\n", angle_degrees, sin(radians));

    cout << setfill('*');    // Fills any non charater spots with this character
    cout << setw(10) << right << "Corin" << setw(10) << left << '!' << endl;
    cout << setfill(' ');

    return 0;
}