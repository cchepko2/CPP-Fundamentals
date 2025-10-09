#include <iostream>

using namespace std;

int main()
{

    int x[] = {120, 200, 16};

    cout << x << endl;  // This is the address for the 
                        // beginning of the array
    cout << &x[0] << endl; // Also the address of the first element
    cout << &x[1] << endl; // Also the address of the first element

    int y[3];

    // This loop makes a copy of array x into array y
    for(int i=0; i<3; i++)
    {
        y[i] = x[i];
    }

    cout << y << endl;

  return 0;
}