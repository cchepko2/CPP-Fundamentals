#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    float val = 0.99;

    string answer0, answer1, answer_final;
    answer0  = "Cost = ";
    answer1 = " cents.";    // c++ string
    char fname[10] = "Corin";  // c-string

    cout << fname << endl;

    answer_final = answer0 + to_string(val);
    cout << answer_final << endl;

    string str_val2 = to_string('A'); // uses ASCII value
    cout << str_val2 << endl;

    // extracting integer out from c-string literal
    cout << atoi("43543 alphabets") << endl;

    // extracting float from c-string literal
    cout << atof("132.68 text") << endl;

    // extracting float from c-string literal
    cout << atof("text first 132.68 text") << endl;

    int people = 2;
    int total_score = 199;

    // Convert to float to force floating point mathematics
    cout << "Avg Score = " << float(total_score)/people << endl;


    return 0;
}