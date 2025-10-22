#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "AAAA";
    string str2 = "ABBABB";

    cout << boolalpha << (str1 < str2) << endl;
    cout << str1.compare(str2) << endl;

    cout << str1.compare(str2) << endl;

    cout << (str1 >= str2) << endl;

    str1.append("More stuff");
    cout << str1 << endl;
    
    str2 += "More Stuff";
    cout << str2 << endl;


    return 0;
}