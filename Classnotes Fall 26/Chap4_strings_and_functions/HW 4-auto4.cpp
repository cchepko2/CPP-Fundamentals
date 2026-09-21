#include <iostream>

using namespace std;

int main()
{
    string str1, str2, str3, temp;
    //int w1, w2, w3;

    cout << "Enter 1st string: ";
    getline(cin, str1);

    cout << "Enter 2nd string: ";
    getline(cin, str2);

    cout << "Enter 3nd string: ";
    getline(cin, str3);

    if( str1 > str2 ) // str2 is alphabetically before str1, so swap
    {
        temp = str1;
        str1 = str2;
        str2 = temp;
    }

    if( str2 > str3) // str3 is alphabetically before str2, so swap
    {
        temp = str2;
        str2 = str3;
        str3 = temp;
    }

    if(str1 > str2) // str2 is alphabetically before str1, so swap
    {
       temp = str1;
        str1 = str2;
        str2 = temp; 
    }

    cout << str1 << endl << str2 << endl << str3 << endl;

    return 0;
}