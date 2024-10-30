/*
Author: Corin Chepko
Date: 10/29/24
Program info: kattis problem - https://open.kattis.com/problems/whatdoesthefoxsay
*/

#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>

using namespace std;

void erase_sounds(vector<string> &sounds, vector<string> &animal_sounds);
void get_animal_sounds(vector<string> &animal_sounds);
void test();

int main(void)
{
    vector<string> sounds;
    vector<string> animal_sounds;
    string line;

    int num_tests;

    cin >> num_tests;
    // After a cin, need to do an ignore to drop the hanging '\n'
    // from the stream before a getline()
    cin.ignore(1000, '\n');

    for(int i=0; i<num_tests; i++)
    {
        // We have all the sounds now
        // Collect animal sounds
        get_animal_sounds(animal_sounds);         
        erase_sounds(sounds, animal_sounds);

        // For each sound in the vector of sounds
        for(auto s: sounds)
        {
            if( s != "-")
            {
                cout << s << ' ';
            }
        }
        cout << endl;

        sounds.clear();
        animal_sounds.clear();
    } // end for(i=0 to num_tests)

    return 0;
}

void erase_sounds(vector<string> &sounds, vector<string> &animal_sounds)
{
    string sound, sound2;
    sound = animal_sounds[0];

    while(true)
        {
            // for each pointer to an element in the vector
            for(auto s_element=sounds.begin(); s_element<sounds.end();s_element++)
            {
                // dereference the pointer to access it's value
                if(*s_element == sound)
                {
                    *s_element = '-';
                }
            }
        }
}

void get_animal_sounds(vector<string> &animal_sounds)
{
    while(true)
    {

        string sound, sound2;
          
        cin >> sound >> sound2 >> sound;
        //cout << "Sound = " << sound << endl;
        if( sound2 != "goes")
        {
            break;
        }
        animal_sounds.push_back(sound);
    }

}

void test(void)
{
    vector<string> sounds = {"toot", "woof", "bang"};
    vector<string> animal_sounds = {"bang"};

    erase_sounds(sounds, animal_sounds);
    //assert(erase_sounds())
}