#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int item = 0;
    do 
    {
    item++;
    if (item == 4) continue;
    sum += item;
    }
    while (item < 5);

    cout << item << endl;

    return 0;
}