#include <iostream>

using namespace std;

int main(void)
{
    float num1 = 3.14;
    int num2 = 4;
    int num3 = 3;
    int sum = num2+num3;
    char letter = 'a';
    char bannana = 'b';
    string name = "\'\"Corin\tChepko\"\'";

    cout << "num2+ num3 = sum = " << sum << '\n';

    num2 = 5;
    sum = num2+num3;

    cout << "num2+ num3 = sum = " << sum << endl;

    cout << name << endl;

    cout << "My solution is \r bonkered.\n";

    cout << "Does the bell work?\a\n";

    string card = "|--\"---1|\n|   ♡   |\n|1--\"---|\n";

    string raw_card = R"(|--"---1|
    |   ♡   |
    |1--"---|
    )";

    cout << card << endl;

    cout << raw_card << endl;

    return 0;
}