#include <iostream>

using namespace std;

int main(void)
{
    string name1 = "cats";
    string name2 = "catz";
 
    cout << "Enter string1: ";
    cin >> name1;
    
    cout << "Enter string2: ";
    cin >> name2;

    int same = 0;
    for(char c: name1)
    {
        if(name2.find(c) != string::npos)
        {
            same++;
        }
    }

    cout << "Number of same letters: " << same << endl;

    return 0;
}