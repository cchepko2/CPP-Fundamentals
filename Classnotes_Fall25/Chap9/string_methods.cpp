#include <iostream>

using namespace std;

int main()
{
    string name = "Sally";

    cout << name.front() << " is the first character." << endl;
    cout << boolalpha << (name.front() == name[0]) << endl;
    cout << name.back() <<  " is the last character." << endl;

    cout << "Number of characters in string: " << name.size() << endl;

    cout << "Out of bounds character at index 6: " << name[6] << endl;
    //cout << "Out of bounds character at index 6: " << name.at(6) << endl;

    // Strings can be modified one charater at a time
    name[0] = 'C';
    cout << name << endl;

    // using capacity to traverse/iterate over a string
    for(int i=0; i<name.length(); i++) {
        cout << "name[" << i << "] = " << name[i] << endl;
    }

    for(auto ch: name)
        cout << ch << " -> " << char(toupper(ch)) << endl;

    // clearing a string
    name = "";
    name.clear();

    cout << name.size() << endl;


    string strData = "Pirates of the Carribean!";
    // insert 1 $ character at index 0
    strData.insert(0, 1, '$');
    cout << strData << endl;

    // insert 5 astersisks at index 5
    strData.insert(5, 5, '*');
    cout << strData << endl;

    // Insert "The " at the beginning
    strData.insert(0, "The ");
    cout << strData << endl;

    // erase all 5 asterisks starting at index 9
    strData.erase(9, 5);
    cout << strData << endl;

    // what is npos?
    cout << "string::npos, the largest size a string can be, is: " 
        << string::npos << endl;

    name = "Sally";
    cout << "location of \"ally\" in name: " << name.find("ally") << endl;

    if(name.find("Simon says, ") ==  string::npos)
    {
        cout << "This string does not contain \"Simon says, \"" << endl;
    }

    return 0;
}