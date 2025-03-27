/*
Corin Chepko
03/26/25
Kattis Problem: https://open.kattis.com/problems/whatdoesthefoxsay
Algorithm Steps:
    Collect number of test cases
    for each test case:
        collect line of sounds
        collect known sounds
        when reach line that says "What does the fox say":
            Subtract known sounds from recorded sounds
            print result

*/

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(void)
{
    int num_tests;
    vector<string> sounds;
    vector<string> known_sounds;
    string sounds_str;
    string third_word;

    cin >> num_tests;
    cin.ignore(1000, '\n');
    for(int i=0; i<num_tests; i++)
    {
        getline(cin, sounds_str);
        istringstream iss(sounds_str);  // Create input string of sounds to unpack into a vector
        while( iss >> third_word )  // Read each word and put into vector
        {
            sounds.push_back(third_word);
        }

        do
        {
            cin >> third_word >> third_word >> third_word;
            if(third_word != "the")
            {
                known_sounds.push_back(third_word);
            }
            else{
                cin >> third_word >> third_word; // Get rid of "fox say"
                cin.ignore(1000, '\n');
                break;
            }
        } while (third_word != "the");


        string answer = "";
        for(string sound:sounds)
        {
            bool match = false;
            for(string animal_sound:known_sounds)
            {
                if( sound == animal_sound )
                {
                    match = true;
                }
            }
            if(match == false) // This sounds does not match any known sounds
            {
                answer += sound + ' ';
            }
        }
        cout << answer << endl;
        
        sounds.clear();
        known_sounds.clear();
    }

    return 0;
}