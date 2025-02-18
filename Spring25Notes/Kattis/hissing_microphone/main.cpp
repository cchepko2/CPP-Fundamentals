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
    string text, answer="hiss";

    cerr << "Enter a string of text: ";
    cin >> text;

    if( text.find("ss") == string::npos) // Could not find "ss" substring
    {
        answer = "no hiss";
    }

    cout << answer << endl;

    return 0;
}