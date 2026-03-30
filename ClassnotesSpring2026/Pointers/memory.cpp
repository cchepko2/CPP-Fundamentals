#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int small_array[10];
    int *big_array = new int[10000000];

    for(int i=0; i<10; i++)
    {
        cout << (small_array+i) << '\t' << (big_array + i) << endl;
    }
    for(int i=0; i<10; i++)
    {
        cout << small_array[i] << '\t' << big_array[i] << endl;
    }

    cout << big_array << endl;

    delete[] big_array;
    
    return 0;
}