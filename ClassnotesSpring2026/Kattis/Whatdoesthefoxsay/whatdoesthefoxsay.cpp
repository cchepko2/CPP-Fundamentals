/*
Corin Chepko
3/26/26
Kattis Problem - https://open.kattis.com/problems/whatdoesthefoxsay
*/

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    vector<string> noises;
    vector<string> known_sounds;

    string line;
    string temp;
    
    getline(cin, line);
    istringstream iss(line);

    while(iss >> temp)
    {
        noises.push_back(temp);
    }
    cout << line << endl;
    
    do
    {
        getline(cin, line);

        if(line == "what does the fox say?")
        {
            break;
        }

        istringstream line_in(line);
        line_in >> temp >> temp >> temp;
        known_sounds.push_back(temp);
    } while (line != "what does the fox say?");
    

    for(auto noise: noises)
    {
        cout << noise << ',';
    }
    cout << endl;

    for(auto noise: known_sounds)
    {
        cout << noise << ',';
    }

    return 0;
}