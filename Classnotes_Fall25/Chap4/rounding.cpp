#include <iostream>
#include <cmath>

using namespace std;

int rounded(float number)
{
    return static_cast<int>(number + 0.5);
}

int main()
{
    cout << M_PI << endl;

    float pi = 3.14159;

    cout << rounded(pi) << endl;


    char character;
    cout << "Enter a character: ";
    cin >> character;

    if(character >= 'a' and character <= 'z')
    {
        character -= 'a';
        cout << static_cast<int>(character) << endl;
    }
    else if((character >= 'A') and (character <= 'Z'))
     {
        character -= 'A';
        cout << static_cast<int>(character) << endl;
    }
    else
    {
        character = -1;
        cout << static_cast<int>(character) << endl;
    }

    char a = 'a';
    cout << "a - 'a' = " << (a - 'a') << endl;

    return 0;
}