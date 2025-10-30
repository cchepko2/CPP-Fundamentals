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

    cout << "Enter number of integers to process: ";
    cin >> num_integers;

    //int integers[num_integers]; // generally not allowed
    int *integers = new int(num_integers);

    for( int i=0; i<num_integers; i++)
    {
        //cout << *(integers + i) << '\t';
        cin >> integers[i];
    }

    for( int i=0; i<num_integers; i++)
    {
        cout << *(integers + i) << '\t';
    }
    cout << endl;

    // sort the array
    sort(&integers[0], &integers[num_integers], greater());

    for( int i=0; i<num_integers; i++)
    {
        cout << *(integers + i) << '\t';
    }
    cout << endl;


    delete [] integers;

    return 0;
}