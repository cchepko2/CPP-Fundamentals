/*
Corin Chepko
2/18/25
Program info: Kattis problem - https://open.kattis.com/problems/hissingmicrophone
Algorithm Steps:
    input a string
    check if "ss" is in string
    print "hiss" if in the string, otherwise print "no hiss"
*/

#include <iostream>

using namespace std;

int main(void)
{
    string text, answer="no hiss";

    cerr << "Enter a string of text: ";
    cin >> text;

    char prev_char = text[0];

    for(int i=1; i<text.length(); i++)
    {
        if(text[i] == 's' and prev_char == 's')
        {
            answer = "hiss";
            break;
        }
        prev_char = text[i];
    }

    cout << answer << endl;

    return 0;
}