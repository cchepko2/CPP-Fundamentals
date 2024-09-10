#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)
{
    // generate random number between 0 and RAND_MAX
    // run this cell a few times to see different pseudo random number
    // rand()
    string fname = "Corin", lname = "Chepko";
    int age = 43;
    double gpa = 3.85;

    srand(time(NULL));
    int random_number = rand()%100;

    cout << "2^16 = " << pow(2, 31) << endl;
    cout << "Max random number = " << RAND_MAX << endl;
    cout << "Random Number = " << random_number << endl;

    // setw() and setfill() example
    // print 50-character long string with '='
    cout << setw(50) << setfill('=') << "" << endl;

    cout << setfill(' ');
    cout << setw(20) << "First Name" << setw(20) << "Last Name"
     << setw(5) << "Age" << setw(5) << "GPA" << endl;

    cout << setw(20) << fname << setw(20) << lname
     << setw(5) << age << setw(5) << gpa << endl;

    printf("Printing characters:\t %c\n", 98);

    // print "Hi" in a column width of 10 and left justified
    printf("Column Width & Left Justification: '%-10s'\n", "Hi");

    return 0;
}