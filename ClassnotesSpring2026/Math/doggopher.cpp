/*
Corin Chepko
2/19/26
Kattis Problem - doggopher: https://open.kattis.com/problems/doggopher
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double gopher_x, gopher_y, dog_x, dog_y;
    double hole_x, hole_y;
    double dog_dist, gopher_dist;

    // Kattis ignores cerr statements
    // cerr is like cout, but for human eyes only
    cerr << "Enter coordinates of the gopher and dog:";
    cin >> gopher_x >> gopher_y >> dog_x >> dog_y;

    cerr << "Enter hole coordinates: ";
    
    
    while(cin >> hole_x >> hole_y)
    {

        dog_dist = sqrt(pow((dog_x - hole_x), 2) + pow((dog_y - hole_y), 2));
        gopher_dist = sqrt(pow((gopher_x - hole_x), 2) + pow((gopher_y - hole_y), 2));
        cerr << "Gopher dist = " << gopher_dist << endl;
        cerr << "Dog dist = " << dog_dist << endl;

        if(gopher_dist*2 <= dog_dist)
        {
            cout << "The gopher can escape through the hole at ("
                << hole_x << "," << hole_y << ")." << endl;
            return 0; // Exit the program
        }
        
    }
    cout << "The gopher cannot escape." << endl;

    return 0;
}