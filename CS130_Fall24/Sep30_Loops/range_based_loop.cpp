#include <iostream>
#include <cstring> // touppper

using namespace std;

int main(void)
{
    string text = "Hello World!"; // c++ string
    char text2[] = "Hello World!"; // c-string

    string texts[] = {"Hello", "World", "I", "like","c++"};

    // recall: auto can be used to automatically determine type based on value assigned
    for(auto ch: text) {
        cout << ch << " -> ASCII: " << int(ch) << " UPPER: " << char(toupper(ch)) << endl;
    }

    // recall: auto can be used to automatically determine type based on value assigned
    for(char character: text) // for each character in text
    {
        cout << character << " -> ASCII: " << int(character) << " UPPER: " << char(toupper(character)) << endl;
    }
    for(int i=0;i<sizeof(text2)/sizeof(char); i++)  // sizeof() does not work for c++ strings
    {
        cout << text2[i] << " -> ASCII: " << int(text2[i]) << " UPPER: " << char(toupper(text2[i])) << endl;
    }

    for(string word: texts)
    {
        cout << word << endl;
    }

    for(int i=0; i<5; i++)
    {
        cout << texts[i] << endl;
    }

    return 0;
}