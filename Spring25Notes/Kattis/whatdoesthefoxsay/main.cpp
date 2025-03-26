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

using namespace std;

int main(void)
{
    int num_tests;
    vector<string> sounds;
    vector<string> known_sounds;
    string sounds_str;
    string third_word;

    /*cin >> num_tests;
    for(int i=0; i<num_tests; i++)
    {
            // We'll work on this part first
    }*/

    cin.ignore(1000, '\n');
    getline(cin, sounds_str);
    do
    {
        cin >> third_word >> third_word >> third_word;
        if(third_word != "the")
        {
            known_sounds.push_back(third_word);
        }
    } while (third_word != "the");

    cout << sounds_str << endl;
    for(string sound:known_sounds)
    {
        cout << sound << " ";
    }
    cout << endl;
    
    
    

    return 0;
}