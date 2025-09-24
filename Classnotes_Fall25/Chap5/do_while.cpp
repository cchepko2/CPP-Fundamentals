#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    string again;

    do
    {
       cout << "Game running..."; 
        /* game code */


        cout << "Do you want to play again?: ";
        getline(cin, again);
    } while (tolower(again[0]) == 'y');
    

    return 0;
}