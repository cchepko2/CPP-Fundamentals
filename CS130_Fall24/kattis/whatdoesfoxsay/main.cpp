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

void erase_sounds(vector<string> &forest_sounds, vector<string> &animal_sounds);
void get_forest_sounds(vector<string> &forest_sounds);
void get_animal_sounds(vector<string> &animal_sounds);
void test();

int main(void)
{
    vector<string> forest_sounds;
    vector<string> animal_sounds;
    string line;
    int num_tests;

    test();

    cin >> num_tests;
    // After a cin, need to do an ignore to drop the hanging '\n'
    // from the stream before a getline()

    for(int i=0; i<num_tests; i++)
    {
        cin.ignore(1000, '\n');
        // We have all the sounds now
        // Collect animal sounds
        get_forest_sounds(forest_sounds);
        get_animal_sounds(animal_sounds);
        cin.ignore(1000, '\n');   
        erase_sounds(forest_sounds, animal_sounds);

        // For each sound in the vector of sounds
        for(auto s: forest_sounds)
        {
            if( s != "-")
            {
                cout << s << ' ';
            }
        }
        cout << endl;

        forest_sounds.clear();
        animal_sounds.clear();
    } // end for(i=0 to num_tests)

    return 0;
}

void erase_sounds(vector<string> &forest_sounds, vector<string> &animal_sounds)
{
    for(int i=0; i<animal_sounds.size(); i++)
    {
        for(int j=0; j<forest_sounds.size(); j++)
        {
        // for each pointer to an element in the vector
        //for(auto s_element=forest_sounds.begin(); s_element<forest_sounds.end();s_element++)
            {
                if(forest_sounds[j] == animal_sounds[i])
                {
                    forest_sounds[j] = "-";
                }
                // dereference the pointer to access it's value
                /*if(*s_element == sound)
                {
                    //*s_element = '-';
                }*/// this is for the commented iterator loop
            }
        }
    }
}

void get_forest_sounds(vector<string> &forest_sounds)
{
    string line, sound;

    // Collect the line
    getline(cin, line);

    // Create input stream, like a cin, to process
    istringstream iss(line);

    while(iss >> sound)
    {
          
        forest_sounds.push_back(sound);
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
    vector<string> forest_sounds = {"toot", "woof", "bang"};
    vector<string> animal_sounds = {"bang"};
    vector<string> expected = {"toot", "woof", "-"};

    erase_sounds(forest_sounds, animal_sounds);
    assert(forest_sounds == expected);

    cerr << "All tests passed!" << endl;
}