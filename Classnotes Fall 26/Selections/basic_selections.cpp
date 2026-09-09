/*
Corin Chepko
9/9/26
Besic Selections
*/

/*
Corin Chepko
9/7/26
Chap 2 notes, input
*/

#include <iostream>

using namespace std;

int main()
{
    char yes_no;

    cout << "Enter \'N\' for error. " << endl;

    cin >> yes_no;

    if(yes_no == 'N')
    {
        cout << "You entered a 'Y' " << endl;
        return 123;
    }

    cout << "you entered 'N' " << endl;

    return 0;
}