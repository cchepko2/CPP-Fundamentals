#include <iostream>

using namespace std;

int add(int n1, int n2)
{
    return n1+n2;
}

string add(string n1, string n2)
{
    return n1+n2;
}

int main()
{
    string fname="Corin ", lname="Chepko";
    int n1=3, n2=5;

    cout << add(fname, lname) << endl;
    cout << add(n1, n2) << endl;

    return 0;
}