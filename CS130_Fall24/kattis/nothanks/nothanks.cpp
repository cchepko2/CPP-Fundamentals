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
#include <algorithm>

void bubbleSort(int nums[], int len);

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

    /*for(int i=0; i<num_cards; i++)
    {
        cout << card_vals[i] << ", ";
    }
    cout << endl;*/

    //bubbleSort(card_vals, num_cards);
    sort(&card_vals[0], &card_vals[num_cards]);

    /*for(int i=0; i<num_cards; i++)
    {
        cout << card_vals[i] << ", ";
    }
    cout << endl;*/

    int prev_val = card_vals[0];
    int score = card_vals[0];
    for(int i=1; i<num_cards; i++)
    {
        if(card_vals[i] > prev_val+1) //incremented by more than 1
        {
            score += card_vals[i];
        }
        prev_val = card_vals[i];
    }

    cout << score << endl;

    delete card_vals;

    return 0;
}

//Implements bubble sort
void bubbleSort(int nums[], int len)
{
	int i, j, temp;
	bool sorted = false;
	for (i = 0; i < len; i++) {
    	sorted = true;
		for (j = 0; j < len-i-1; j++) {
			// if two adjacent numbers are not in order, swap 'em
			if (nums[j] > nums[j+1]) {
				//FIXME5: swap the values of nums[j] and nums[j+1]
				// can use built-in swap or implement your own swap
				swap(nums[j], nums[j+1]);
				sorted = false;
			}
		}
		if (sorted) break;
	}
}