/*
Corin Chepko
4/10/24
Kattis Problem Simon says: https://open.kattis.com/problems/simonsays
*/


#include <iostream>

using namespace std;

int main(void)
{
    int cases;
    string phrase;

    cin >> cases;
    cin.ignore(10,'\n');

    for(int i=0;i<cases;i++)
    {
        getline(cin, phrase);
        
        if( phrase.find("Simon says") == 0)
        {
            cout << phrase.substr(10,phrase.length()-10) << endl;
        }

    }

    return 0;
}
