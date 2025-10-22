/*
Programmer: Corin Chepko
Date: 10/21/25
Program: Kattis problem - https://open.kattis.com/problems/simonsays
Algorithm Steps:
    collect first input, number of lines to read:
    for each line:
        check if it begins with "Simon says"
        if it does:
            print all character after "Simon says"
        else:
            print nothing

*/


#include <iostream>

using namespace std;

int main()
{
    int number_lines;
    string line;

    cerr << "Enter number of lines: ";

    cin >> number_lines;
    //cerr << number_lines;

    for(int i=0; i<=number_lines; i++)
    {
        getline(cin, line);
        //cerr << line << endl;

        if(line.find("Simon says") != string::npos)
        {
            cout << line.substr(10) << endl;
        }
    }


    return 0;
}