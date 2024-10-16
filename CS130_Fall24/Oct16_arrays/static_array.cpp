#include <iostream>

using namespace std;

int main(void)
{
    double grades[10] = {90,67,80,15,50,99,100,76,10,0};
    double *grade_ptr = &grades[0];

    cout << "First grade in array grades: " << grades[0] << endl;
    cout << "Address of first grade in array grades: " << &grades[0] << endl; 

    cout << "Last (10th) grade in array grades: " << grades[9] << endl;
    cout << "Address of last grade in array grades: " << &grades[9] << endl;

    //cout << dec << 0x10 << "+ 80 = " << dec << 0x58 << endl; 
    for(int i=0; i<10; i++)
    {
        cout << grades[i] << ", ";
    }
    cout << endl;

    for(int i=0; i<10; i++)
    {
        cout << *(grade_ptr + i) << ", "; // Does same thing as line 19
    }   // *(grade_ptr + i) is the same as grades[i]
    cout << endl;

    return 0;
}