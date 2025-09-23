#include <iostream>

using namespace std;

int main()
{
    string fname = "Corin";
    string lname = "Chepko";

    cout << "The first character of fname is: ";
    cout << fname.front() << '\t';
    cout << fname[0] << endl;

    cout << "The last character of fname is: ";
    cout << fname.back() << '\t';
    cout << fname[fname.length()-1] << endl;

    cout << "fname > lname" << boolalpha << (fname > lname) << endl;
    cout << "101 > 20" << ("101" > "20") << endl;

    fname[0] = tolower(fname[0]);
    for(int i=0; i<fname.length(); i++)
    {
        cout << fname[i] << '\t';
    }
    cout << endl;
    fname[2] = 'Z';
    for(int i=0; i<fname.length(); i++)
    {
        cout << fname[i] << '\t';
    }
    

    cout << endl;



    cout << "The number of characters in fname = " << fname.length() << endl;
    

    cout << fname + lname << endl;

    char fname_cstr[] = "Corin";

    cout << fname_cstr << endl;


    return 0;
}