#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int num1 = 10;
    int num2 = 3;
    float avg1 = (num1+num2)/2;
    float avg2 = (num1+num2)/2.0;

    cout << avg1 << endl; //avg1 is 6 instead of 6.5 because only integers were used in the math expression
    cout << avg2 << endl;

    //bit shifts
    int shifted = num1 << 2; // bitshift divides or multiplys by 2 the numbers  of times on the right of the operator
    cout << shifted << endl;
    shifted = shifted >> 4; // bit shifts only operate on integers and the results is always an integer
    cout << shifted << endl; 

    num2 = 4;
    num2 = num2^3;
    cout << num2 << endl;  //^ is not an exponent operator

    char alpha = 'a';
    alpha=alpha+1;
    cout << alpha << endl;  //can add number to charactors

    cout << alpha*10 << endl;

    string fname, lname; // can define multiple variables of same type in one line
    cout << "Enter your full name" << endl;
    cin >> fname >> lname;
    cout << "Hello " + fname + ' ' + lname << endl;

    //cout << fname*3 << endl; Can't do string multiplication
    double floating_point = 3.57839847;
    cout << floating_point << endl;
    cout << fixed << setprecision(17) << floating_point << endl;
    // fixed means after decimal place for setprecision(x) which sets the output digits after dicimal place
    // notice that output is not exact

    string cost = "The cost is: " + to_string(floating_point);
    cout << cost << endl;


    return 0;
}