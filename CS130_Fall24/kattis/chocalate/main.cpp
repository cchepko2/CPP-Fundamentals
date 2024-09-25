#include <iostream>

using namespace std;

int main(void)
{
    int rows, columns;
    string answer = "Beata";

    cerr << "Enter rows and columns: ";
    cin >> rows >> columns;

    if( rows%2 == 1 && columns%2 == 1)
    {
        answer = "Beata";
    }
    else{
        answer = "Alf";
    }

    cout << answer << endl;


    return 0;
}