#include <iostream>

using namespace std;

int main()
{
    string mississippi = "Mississippi";

    for(int i=0; i<mississippi.size(); i++)
    {
        cout << mississippi[i] << '\t';
    }
    cout << endl;

    for(char character: mississippi)
    {
       cout << character << '\t';
    }
    cout << endl;
    
    return 0;
}