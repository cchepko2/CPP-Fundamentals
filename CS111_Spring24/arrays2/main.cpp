#include <iostream>

using namespace std;

void doubleArray1(int array[], size_t size);
void doubleArray2(int const array[], int *array2, size_t size);
int * doubleArray3(int array[], size_t size);
void printArray(int array[], size_t size);

int main(void)
{
    int some_array[4] = {4,4,3,2};
    size_t size = 4;
    int doubled[4];
    int *doubled2;

    doubleArray1(some_array, size);
    printArray(some_array, size);

    doubleArray2(some_array, doubled, size);
    printArray(some_array, size);

    doubled2 = doubleArray3(some_array, size);
    printArray(doubled2, size);

    cout << doubled2 << endl << some_array << endl << doubled << endl;


    delete doubled2;

    return 0;
}

void doubleArray1(int array[], size_t size)
{
    for(size_t i=0;i<size;i++)
    {
        array[i] = array[i]*2;
    }
}

void doubleArray2(int const array[], int *array2, size_t size)
{
    for(size_t i=0;i<size;i++)
    {
        array2[i] = array[i]*2;
    }
}

int * doubleArray3(int array[], size_t size)
{
    int *doubled = new int[size];

    for(size_t i=0;i<size;i++)
    {
        doubled[i] = array[i]*2;
    }

    return doubled;
}

void printArray(int array[], size_t size)
{
    cout << endl;
    for(size_t i=0;i<size;i++)
    {
        cout << array[i] << ", ";
    }
    cout << endl;
}