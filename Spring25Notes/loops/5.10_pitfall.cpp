# include <iostream>

using namespace std;

int main()
{
    // for 5.10 number 3, declare varibles first, not in loop initialization
    int i, j, found = 0;
    string word = "color";

    for(i=0; i<word.length(); i++)
    {
        for(j=i; j<word.length(); j++)
        {
            // check if character at i is same as character at j
            // break if found, set found flag
        }
        // check found flag, break this loop if found
    }

    return 0;
}