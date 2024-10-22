// copying arrays

#include <iostream>

using namespace std;

int main(void)
{
    int numbers[10];
    int *numbers2;

    for(int i=0;i<10;i++)
    {
        numbers[i] = i;
    }

    numbers2 = numbers;

    for(int i=0;i<10;i++)
    {
        cout << "numbers at index " << i << '=' << numbers[i] << endl;
    }
    for(int i=0;i<10;i++)
    {
        cout << "numbers2 at index " << i << '=' << numbers2[i] << endl;
    }

    numbers[0] = 1000;
    numbers2[9] = -999;

    for(int i=0;i<10;i++)
    {
        cout << "numbers2 and numbers at index " << i << '=' << numbers2[i] << endl;
    }

    return 0;
}