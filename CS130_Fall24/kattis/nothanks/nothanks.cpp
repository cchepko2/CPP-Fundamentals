/*
Author: Corin Chepko
Date: 10/16/24
Program: Kattis problem No thanks - https://open.kattis.com/problems/nothanks
Algorithm:
    input stuff
    sort array in ascending order
    set score = 0
    new_score = first val
    starting at the first value, check if the next value is incremented by 1:
        if is incremented by 1
            don't touch first_val
        else
            add first_val to score
            then update first_val to new number

*/

#include <iostream>

using namespace std;

int main(void)
{
    int num_cards;

    cin >> num_cards;

    //int card_vals[num_cards];
    int *card_vals = new int[num_cards]; // making a dynamic array of num_cards

    for(int i=0; i<num_cards; i++ )
    {
        cin >> card_vals[i];
    }

    for(int i=0; i<num_cards; i++)
    {
        cout << card_vals[i] << ", ";
    }
    cout << endl;

    return 0;
}