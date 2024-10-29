#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(void)
{
    vector<string> sounds;
    string line;

    getline(cin, line);

    istringstream iss(line);

    string sound, sound2;
    while( iss >> sound)
    {
        sounds.push_back(sound);
    }

    while(true)
    {
        cin >> sound >> sound2 >> sound;
        if( sound2 != "goes")
        {
            break;
        }
        for(auto s_element=sounds.begin(); s_element<sounds.end();s_element++)
        {
            cout << *s_element << ' ';
            sounds.erase(s_element);
        }
    }

    for(auto s: sounds)
    {
        cout << s << endl;
    }

    return 0;
}