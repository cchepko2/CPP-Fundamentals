/*
Corin Chepko
8/27/25
Ascii art demo
*/

#include <iostream>

using namespace std;

int main()
{
    string fname = "Bob";
    string lname = "Robert";
    char middleI = 'B';
    int age = 19;
    double gpa = 4.52614876235;

    cout << "Name: " << fname << ' ' << middleI << ' ' << lname << endl;
    cout << fname << " is " << age << " years old." << endl;
    cout << fname << "'s gpa is " << gpa << '\n';

    /*
     /"\
    /@ @\
    ====
     ||
    */

    string line1 = "/\"\\"; // Need to use \" for a double quote and a \\ for a backslash
    string line2 = "/@ @\\";  // Last backslash has to be a \\          Ignore this>>//
    string line3 = "====";
    string line4 = " || ";

    cout << line1 << endl << line2 << "  Corndawg! " << endl << line3 << endl
            << line4 << endl;

    return 0;
}