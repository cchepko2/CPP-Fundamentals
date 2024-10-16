#include <iostream>

using namespace std;

int main(void)
{
    cout << "\n\nWith 4MB I can supposedly reserve 4*1024*1024/8bytes double values = "
    << 1024*1024*4/8 << endl;

    double numbers[100000];

    for(int i=0; i<100000; i++) // With large c-arrays, 
    //the only way to intilize is by a manual loop 
    {
        numbers[i] = i;
    }

    double avg = 0;
    for(int i=0; i<100000; i++) // With large c-arrays, 
    //the only way to intilize is by a manual loop 
    {
        //cout << numbers[i] << ", ";
        avg += numbers[i];
    }

    // Both statements below are the same
    cout << avg / (sizeof(numbers)/sizeof(double))  << endl;
    cout << avg / 100000.0  << endl;

    return 0;
}