/*
Kattis Problem: Falling Apart
https://open.kattis.com/problems/fallingapart
Solving using arrays
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int num_pieces;
    int alice=0, bob=0;
    vector<int> pieces;

    cin >> num_pieces;
    for(int i=0;i<num_pieces;i++)
    {
        int val;
        cin >> val;
        pieces.push_back(val);
    }

    sort(pieces.begin(), pieces.end(), greater());

    for(int i=0;i<num_pieces;i++)
    {
        if(i%2 == 0)
            alice += pieces[i];
        else
            bob += pieces[i];
    }
    cout << alice << ' ' << bob << endl;

    return 0;
}