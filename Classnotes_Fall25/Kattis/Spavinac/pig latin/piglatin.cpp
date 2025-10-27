/*
Programmer: Corin Chepko
10/27/25
Program: Kattis problem - https://open.kattis.com/problems/piglatin
Algorithm steps:
    input line:
        for each line:
            split into words:
                for each word:
                    if begin with 'a, e, i, o, u, y':
                        add "yay" to word
                    if begins with consonent:
                        take letters before first vowel, add to end
                            and add "ay"
                
*/

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string line;
    
    
    cerr << "Enter lines to translate: " << endl;

    getline(cin, line);

    istringstream words_in(line);
    string word;

    while( words_in >> word )
    {
        if(word[0] == 'a' or word[0] == 'e' or word[0] == 'i' or word[0] == 'o'
             or word[0] == 'u' or word[0] == 'y') // begins with vowel
        {
            word = word + "yay" + ' ';
            cout << word << endl;
        }
        else // begin with consonant
        {
            for(int i=0; i< word.length(); i++) // for each letter
            {
                // check if letter is a vowel
                char character = word[i];

                if(character == 'a' or character == 'e' or character == 'i' 
                    or character == 'o' or character == 'u' or character == 'y')
                {
                    string new_word = word.substr(i);
                    cout << new_word + 
                        word.substr(0, word.length()-i+1) + "ay" + ' ';
                    new_word = "";
                    break;
                }
            }
        }
    }
    cout << endl;

    return 0;
}