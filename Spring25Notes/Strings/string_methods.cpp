#include <iostream>

using namespace std;

int main()
{
    string line;

    cout << "Enter text: ";
    getline(cin, line);

    cout << "Length of the string is " << line.length() << endl;

    cout << "The maximum string length is " << line.max_size() << endl;
    cout << "npos is produced if sub-string is not found, npos = " << string::npos << endl;
    cout << "The string contains \"Corin\" at: " << line.find("Corin") << endl;

    if(line.find("Corin") == string::npos)
    {
        cout << "\"Corin\" is not in the string." << endl;
    }
    else
    {
        cout << "The string contains \"Corin\" at: " << line.find("Corin") << endl;
    }

    //cout << line[5] << endl;
    cout << line.at(5) << endl;

    return 0;
}