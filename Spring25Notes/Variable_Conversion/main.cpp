#include <iostream>
#include <iomanip>  // for setprecision() and fixed
#include <string>   // for to_string and stof and stoi

using namespace std;

int main()
{
    double pi = 3.14159;
    int some_num = 4;

    string joined_numbers = to_string(some_num) + to_string(pi);

    cout << pi << "+" << some_num << " = " << joined_numbers << endl;

    string number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "stoi(number) = " << stoi(number) << endl;
    cout << "stof(number) = " << stof(number) << endl;
    // cout setting to 6 decimals
    cout << fixed << setprecision(6) << "stof(number) = " << stof(number) << endl;

    // Using printf with the % float specifier as well as 6 decimals
    printf("%.6f\n", stof(number));

    double numeral = 3.9999;
    printf("number=%f converted to int = %d\n", numeral, int(numeral));

    return 0;

}