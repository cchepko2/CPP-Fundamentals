#include <iostream>


using namespace std;

int main(void)
{
    string phrase = "This is a sentence!";
    char phrase2[260] = "This is another sentence!";
   
    cout << phrase << endl;
    for(char ch: phrase)
    {
        cout << ch << ' ';
    }

    cout << endl << phrase2 << endl;
    for(char ch: phrase2)
    {
        cout << ch << ' ';
    }

    cout << sizeof(phrase2) << '\n';
    for(int i=0; i<sizeof(phrase2); i++)
    {
        cout << phrase2[i] << ' ';
    }

    return 0;
}