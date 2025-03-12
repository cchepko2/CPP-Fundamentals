#include <iostream>

using namespace std;

int main(void)
{
    string name = "Corin";
    char name2[] = "Corin";

    // Traversing a string, 
    // which is kind of like an array of characters
    for(int i=0; i<name.length();i++)
    {
        cout << name[i] << ' ';
    }
    cout << endl;

    int number_of_elements = sizeof(name2)/sizeof(char);
    for(int i=0; i<sizeof(name2)/sizeof(char); i++)
    {
        cout << name[i] << ' ';
    }
    cout << endl;

    // Arrays are calculated and allocated at runtime, 
    // so we need to know their sizes before the program runs
    double measurements[] = {0,1,2,3,4,5};
    double more_measurements[10]; // Declare array of 10 elements
    // For each loop, creates a varible measurement 
    // that uses each value from measurements
    for(double measurement: measurements)
    {
        cout << measurement << ' ';
    }
    cout << endl;

    return 0;
}