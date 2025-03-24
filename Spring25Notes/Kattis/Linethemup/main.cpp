/*
Corin Chepko
3/13/25
Program info: Kattis problem - https://open.kattis.com/problems/lineup
Algorithm Steps:
    collect input
        cin the n, number of lines to follow
        create an array of strings of n size
        for that many lines
            cin each name into the array
    Process input:
        create flag up_down = 0
        for each string in the array:
            if the curr_string > last string
                up_down++
            if the curr_string < last string
                up_down--
    Evaluate:
        if up_down == (n-1)
            "INCREASING"
        else if up_down == -(n-1)
            "DECREASING"
        else
            "NEITHER"
*/

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int up_down = 0;

    cerr << "Enter number of names: ";
    cin >> n; // Input number of names

    string names[n]; // Now we know the number to collect, 
                    // declare an array to hold the names
    
    cerr << "Enter " << n << " names: ";
    for(int i=0; i<n; i++)
    {
        cin >> names[i];
    }

    up_down = 0;
    for(int i=1; i<n; i++)
    {
        if(names[i-1] > names[i])
        {
            up_down = -1;
            break;
        }
    }
    if(up_down == 1) // Still up_down=1, means all alphabetically "INCEASING"
    {
        cout << "INCREASING" << endl;
        return 0;
    }
    
    up_down = -1;
    for(int i=1; i<n; i++)
    {
        if(names[i-1] < names[i])
        {
            up_down = 0;
            break;
        }
    }

    if(up_down == -1) // Still up_down=-1, means all alphabetically "DECEASING"
    {
        cout << "DECREASING" << endl;
    }
    else
    {
        cout << "NEITHER" << endl;
    }

    /*for(int i=0; i<n; i++)
    {
        cout << names[i] << endl;
    }

    cout << names[3] << endl;
    names[3] = "Corin";

    cout << endl << endl;
    for(int i=0; i<n; i++)
    {
        cout << names[i] << endl;
    }*/

    return 0;
}