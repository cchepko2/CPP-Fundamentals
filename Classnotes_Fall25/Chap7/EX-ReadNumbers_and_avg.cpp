#include <iostream>

#define SIZE 5

//const int SIZE = 5;

using namespace std;

int main(void)
{
    double grades[SIZE];
    double avg = 0;

    cout << "Enter in " << SIZE << " numbers separated by a space: " << endl;

    for(int i=0; i<SIZE; i++)
    {
        cin >> grades[i];
    }

    for(int i=0; i<SIZE; i++)
    {
        avg += grades[i];
    }
    avg /= SIZE;

    cout << "The average grade is: " << avg << endl;

    return 0;
}