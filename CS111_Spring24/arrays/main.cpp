#include <iostream>

using namespace std;

int main(void)
{
    int values[5] = {0, 1, 2, 3, 4};  // values are not initialized
    int values2[5] = {0, 0, 0, 0, 0};  // initialized array
    
    cout << values << endl;
    cout << values2 << endl;
    cout << values2 - values << endl;

    values[10] = 24;
    cout << values[10] << endl;

    char name[260] = "Corin";

    cout << "sizeof(values) = " << sizeof(values) << 
        "sizeof(int) = " << sizeof(int) << endl;

    for(int i=0;i<sizeof(values)/sizeof(int); i++)
    // for i from 0 to sizeof whole array divided by size of type of element
    {
        cout << values[i] << ' ';
    }
    cout << endl;

    for(auto i: values) // can use auto if don't know the type, but it's kind of sloppy
    {
        cout << i << ' ';
    }
    cout << endl;

    name[260] = 'L'; // Can modify elements in array
    cout << name[264] << endl;

    for(char c: name)  // Ranged based loop for a c_string doesn't stop at termination character
    {
        cout << c << ' ';
        if(c == '\0')
        {
            break;
        }
    }
    if(name[5] == '\0')
    {
        cout << "Found the termination character!" << endl;
    }

    cout << sizeof(name) << endl;
    cout << name[4] << name[5] << endl;

    return 0;
}