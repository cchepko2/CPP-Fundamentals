/*
Kattis Problem: Falling Apart
https://open.kattis.com/problems/fallingapart
Solving using arrays
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int num_pieces;
    int alice=0, bob=0;

    cin >> num_pieces;

    int *pieces = new int[num_pieces];
    
    for(int i=0;i<num_pieces;i++)
    {
        cin >> pieces[i];
    }

    sort(&pieces[0], &pieces[num_pieces], greater());
    

    for(int i=0;i<num_pieces;i++)
    {
        if(i%2 == 0)
        {
            alice += pieces[i];
        }
        else
        {
            bob += pieces[i];
        }
    }

    cout << alice << ' ' << bob << endl;

    //delete[] pieces;

    return 0;
}