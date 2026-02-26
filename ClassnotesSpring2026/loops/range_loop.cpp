// While loops

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

#define PI 3.14159

int main()
{
    
    string message = "This is a message.";
    int count = 0;
    char current_char;

    // Count based loop
    for(int i=0; i<message.length(); i++)
    {
        cout << message[i] << ' ';

        current_char = toupper(message[i]);

        if(current_char == 'A' or current_char == 'E' or current_char == 'I'
            or current_char == 'O' or current_char == 'U')
        {
            count++;
        }

    }
    
    cout << endl << "There are " << count << " vowels in the message." << endl;

    count = 0;
    // Range based loop
    for(auto ch: message)
    {

        cout << ch << ' ';

        current_char = toupper(ch);

        if(current_char == 'A' or current_char == 'E' or current_char == 'I'
            or current_char == 'O' or current_char == 'U')
        {
            count++;
        }

    }
    cout << endl << "There are " << count << " vowels in the message." << endl;

    return 0;
}