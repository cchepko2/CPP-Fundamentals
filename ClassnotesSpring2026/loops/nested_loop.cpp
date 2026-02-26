// Nested loops

#include <iostream>

using namespace std;

const double gravity = 9.81;

int main()
{
    int i, j;

    cout << '\t';
    for(i=0; i<=10; i++)
    {
        cout << i << '\t';
    }
    for(i=0; i<=10; i++)
    {
        int count=0;
        cout << i << '\t';
        for(j=0; j<=10; j++)
        {
            cout << i*j << '\t';
        }
        cout << endl;
    }

}

