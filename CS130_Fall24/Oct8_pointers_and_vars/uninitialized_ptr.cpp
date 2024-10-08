#include <iostream>

using namespace std;

int main(void)
{
    string *p, *q;
    string stuff;

    p = &stuff;

    cout << "\n\n\n";

    cout << *p << endl;
    cout << p << endl;

    p += 10;
    cout << p << endl;
    cout << *p << endl;


    return 0;
}