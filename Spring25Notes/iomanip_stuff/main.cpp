#include <iostream>
#include <iomanip>

 using namespace std;

 int main()
 {
    string name = "Corin";
    double gpa = 3.4;

    cout << setw(10) << left << name << setw(30) << "Some stuff in here"
        << setw(10) << right << gpa << endl;

    cout << setw(10) << left << name << setw(30) << right << "Some stuff in here"
        << setw(10) << right << gpa << endl;
    
    cout << setw(10) << left << name << setw(30) << right << "Some stuff in here"
        << setw(10) << left << gpa << endl;

    
    return 0;
 }