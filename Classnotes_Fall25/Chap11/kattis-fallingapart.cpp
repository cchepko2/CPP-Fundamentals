/*
Allocating pointer arrays and sorting
*/

#include <iostream>
#include <algorithm>
#include <functional> // For std::greater to sort backwards

using namespace std;

int main()
{
    int num_integers;
    int alice = 0, bob = 0;

    cerr << "Enter number of integers to process: ";
    cin >> num_integers;

    //int integers[num_integers]; // generally not allowed
    int *integers = new int[num_integers];

    
    for( int i=0; i<num_integers; i++)
    {
        //cout << *(integers + i) << '\t';
        cin >> integers[i];
    }

    // sort the array
    sort(integers, (integers+num_integers), greater());

    for(int i=0; i<num_integers; i++)
    {
        if(i%2 == 0) // i is even Alice score
        {
            alice += integers[i];
        }
        else // bob's piece
        {
            bob += integers[i];
        }
    }


    /*for( int i=0; i<num_integers; i++)
    {
        cout << *(integers + i) << '\t';
    }*/
    
    cout << alice << ' ' << bob << endl;


    delete [] integers;

    return 0;
}