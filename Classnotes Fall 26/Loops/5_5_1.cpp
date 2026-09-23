#include <iostream>

using namespace std;

int main()
{
    char userInput = 'h';

    /*while(userInput != 'a' and userInput != 'A' and 
        userInput != 'e' and userInput != 'E' and 
        userInput != 'i' and userInput != 'I' and 
        userInput != 'o' and userInput != 'O' and 
        userInput != 'u' and userInput != 'U' )
    {
        cin >> userInput;

    }*/

    string vowels = "AaEeIiOoUu";
    bool go = true;

    while(go)
    {
        cin >> userInput;
        for(char character: vowels)
        {
            if( userInput == character)
            {
                go = false;
                break;
            }
        }
    }
    


    return 0;
}