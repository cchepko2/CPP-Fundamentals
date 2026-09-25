#include <iostream>

using namespace std;

int main()
{
    string phrase = "Hello World!";

    for(char c: phrase)
    {
        cout << c << ' ';
    }
    cout << endl;

    for(int i=0; i<phrase.length(); i++)
    {
        cout << phrase[i] << ' ';
    }
    cout << endl;

    //cout << c << endl;

    return 0;
}