#include <iostream>

using namespace std;

int main()
{
    string in_string = "<windows.h>";
    int i=0, j=0;
    char repeated;
    bool found = false;

    cout << "Enter a string: ";
    cin >> in_string;

    for(i=0; i<in_string.size(); i++)
    {
        for(j=i+1; j<in_string.size(); j++)
        {
            if(in_string[i] == in_string[j] and found != true)
            {
                repeated = in_string[i];
                found = true;
            }
        }
    }

    if(found == true)
        cout << "The first repeated character is " << repeated << endl;
    else
        cout << "No repeated character was found" << endl;

    return 0;
}