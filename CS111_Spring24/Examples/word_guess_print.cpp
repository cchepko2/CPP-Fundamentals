#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    string word = "cats";
    char guess = 'a';

    const int num_guesses = 6;
    char guesses[num_guesses];

    for(int i=0;i<num_guesses;i++)
    {
        cin >> guess;
        guesses[i] = guess;

        for(auto c: word)
        {
            bool in = false;
            for(int i=0;i<6;i++)
            {
                if( tolower(c) == guesses[i])
                {
                    in = true;
                    break;
                }
            }
            if(in)
            {
                cout << c;
            }
            else
            {
                cout << '_';
            }
        }
        cout << endl;
    }
}