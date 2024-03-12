#include <iostream>

using namespace std;

int main(void)
{
    int values[100] = {0};  // A way, at declaration, to make an array of all 0s, doesn't work for other values

    for(int i=0; i<100; i++)
    {
        cout << values[i] << ' ';
    }
    cout << endl;

    for(int i=0; i<sizeof(values)/sizeof(int); i++)
    {
        values[i] = 1;
    }

    for(int i=0; i<100; i++)
    {
        cout << values[i] << ' ';
    }
    cout << endl;

    return 0;
}