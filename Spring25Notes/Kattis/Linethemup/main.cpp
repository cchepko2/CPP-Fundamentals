#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int up_down = 0;

    cerr << "Enter number of names: ";
    cin >> n; // Input number of names

    string names[n]; // Now we know the number to collect, 
                    // declare an array to hold the names
    
    cerr << "Enter " << n << " names: ";
    for(int i=0; i<n; i++)
    {
        cin >> names[i];
    }

    up_down = 1;
    for(int i=1; i<n; i++)
    {
        if(names[i-1] > names[i])
        {
            up_down = -1;
            break;
        }
    }
    if(up_down == 1)
    {
        cout << "INCREASING" << endl;
        return 0;
    }
    
    up_down = -1;
    for(int i=1; i<n; i++)
    {
        if(names[i-1] < names[i])
        {
            up_down = 0;
            break;
        }
    }

    if(up_down == -1)
    {
        cout << "DECREASING" << endl;
    }
    else
    {
        cout << "NEITHER" << endl;
    }

    /*for(int i=0; i<n; i++)
    {
        cout << names[i] << endl;
    }

    cout << names[3] << endl;
    names[3] = "Corin";

    cout << endl << endl;
    for(int i=0; i<n; i++)
    {
        cout << names[i] << endl;
    }*/

    return 0;
}