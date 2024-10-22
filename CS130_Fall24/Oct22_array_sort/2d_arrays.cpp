#include <iostream>

using namespace std;

int main(void)
{
    // declare a 2d array of 10 elements by 10 elements
    double distances[10][10];

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            distances[i][j] = i*10+j;
        }
    }

    cout << endl;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout << distances[i][j] << ',';
        }
    }
    cout << endl;

    return 0;
}