#include <iostream>

using namespace std;

int main()
{
    string fname = "Corin";
    string lname = "Chepko";

    cout << "The number of characters in fname = " << fname.length() << endl;
    

    cout << fname + lname << endl;

    char fname_cstr[] = "Corin";

    cout << fname_cstr << endl;


    return 0;
}