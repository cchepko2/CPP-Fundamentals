#include <iostream>

using namespace std;

// Write your code below
void setValue(int &ref, int copy)
{
    ref = copy;
}

int main()
{
    int n1 = 5, n2 = 4;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    setValue(n1, n2);
    // setValue basically does this: n1 = n2;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    return 0;
}