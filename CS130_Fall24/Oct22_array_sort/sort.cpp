#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

void printArray(float arr[], int size)
{
    cout << "Array values: " << endl;
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << ',';
    }
    cout << endl;
}

// sorting function sort method: 
// return the thing that is supposed to be true
bool decending(float first, float second)
{
    //return first > second; // for decending order
    return second > first; // for ascending order
}

int main(void)
{
    // let's declare an array of float
    float stu_grades[] = {100, 99.6, 55, 100, 65, 15.5};
    int size = sizeof(stu_grades)/sizeof(float);

    printArray(stu_grades, size);

    // For array, sort needs address of the beginning,
    // and the address of the end.
    // An optional sort function can be provided
    //sort(&stu_grades[0], &stu_grades[size]);

    // sort stu_grades in ascending order
    sort(begin(stu_grades), end(stu_grades), decending);

    printArray(stu_grades, size);

    return 0;
}