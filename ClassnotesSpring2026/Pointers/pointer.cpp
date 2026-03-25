#include <iostream>

using namespace std;

int main()
{
    int val1 = 10, val2 = 99;

    int *pt1 = &val1;

    cout << &val1 << endl;
    cout << pt1 << endl;

    cout << *&val1 << endl;
    cout << *pt1 << endl;
    //pt1 = &val2;
    //cout << *pt1 << endl;

    int array[5] = {1, 2, 3, 4, 5};
    cout << array << endl;

    for(int i=0; i<10; i++)
    {
        cout << "Value at " << &array[i] << " = " << array[i] << endl;
    }
    for(int i=0; i<10; i++)
    {
        cout << "Value at " << (array + i) << " = " << *(array+i) << endl;
    }
    
    return 0;
}