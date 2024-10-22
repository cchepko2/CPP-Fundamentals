#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

void printArray(string arr[], int size)
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
bool decending(string first, string second)
{
    //return first > second; // for decending order
    return second > first; // for ascending order
}

int main(void)
{
    // let's declare an array of float
    string people[10] = {"Xander", "Corin", "Alice", "Bob", "Sarah", "Clare", "Randy", "Bjorn", "Calvin", "Hobbes"};
    
    string numbers[10] = {"1", "15", "0", "2", "6", "100", "99", "88", "76", "10"};

    int size = 10;

    printArray(numbers, size);

    // For array, sort needs address of the beginning,
    // and the address of the end.
    // An optional sort function can be provided
    //sort(&stu_grades[0], &stu_grades[size]);

    // sort stu_grades in ascending order
    sort(begin(numbers), end(numbers), decending);

    printArray(numbers, size);

    return 0;
}