#include <iostream>

using namespace std;

int main()
{
    string name = "Corin";

   for(int i=0; i<name.size(); i++)
    {
        cout << name[i] << ' ';

    }
    cout << endl;

    for(char c: name)
    {
       cout << c << ' ';
    }
     cout << endl;

     for(int c: name)
    {
       cout << c << ' ';
    }
     cout << endl;

     for(double c: name)
    {
       cout << c << ' ';
    }
     cout << endl;

     for(auto c: name)
    {
       cout << c << ' ';
    }
     cout << endl;

    return 0;
}