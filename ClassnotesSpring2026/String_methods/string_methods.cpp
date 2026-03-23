/*
String methods
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string message = "Hello World!";

    // Append a string
    message.append("More message");
    cout << message << endl;

    // Append a number of characters
    message = "Hello World!";
    message.append(5, '!');
    cout << message << endl;

    // Append number of characters of a string
    message = "Hello World!";
    message.append("1234", 2);
    cout << message << endl;

    printf("%s\n", message.c_str());

    cout << "Number of characters in string = " << message.length() << endl;
    cout << "Number of characters in string = " << message.size() << endl;

    cout << "Max string capacity = " << message.capacity() << endl;
    cout << "Max index = " << message.npos << endl;

    cout << "First character = " << message[0] << endl;
    // The at method will create an exception
    cout << "First character = " << message.at(0) << endl;

    for(auto c: message)
    {
        cout << c << ' ';
    }
    cout << endl;

    for(int i=0; i<message.length(); i++)
    {
        cout << message.at(i) << ' ';
    }
    cout << endl;

    for(auto it = message.begin(); it != message.end(); it++)
    {
      cout << *it << ' ';
    }
    cout << endl;

    cout << boolalpha << message.empty() << endl;
    message.clear();
    cout << boolalpha << message.empty() << endl;

    message = "Simon says jump Simon says!";
    int found_at = message.find("Simon says");
    cout << message.find("Simon says") << endl;
    cout << message.find("Simon says", found_at+1) << endl;

    cout << message.rfind("Simon says") << endl;

    // Get a sub-string from indices
    cout << message.substr(1, 5) << endl;
    
    return 0;
}