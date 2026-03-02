#include <string>
#include <iostream>

using namespace std;


int main()
{
    int p = -1, i, j;
    string s;
    cout<<"Insert a string: ";
    cin >> s;
    cout<<endl;
    for (i = 0; i < s.length(); i++)
    {
    for (j = i + 1; j < s.length(); j++)
    {
        if (s[i] == s[j])
        {
        p = i;
        cout <<"The first repeated character is "<< s[p];
        break;
        }
    }
    if (p != -1)
        break;
    }
    if (p == -1)
    {
    cout << "No repeated character was found";
    }

    return 0;
}