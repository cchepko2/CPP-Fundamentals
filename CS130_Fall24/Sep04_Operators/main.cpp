// Stuff

#include <iostream>

using namespace std;

int main(void)
{
    cout << 10/11.0 << endl;
    cout << 10%11 << endl;

    int minutes, hours;

    cout << "Enter number of minutes to convert to hours: ";
    cin >> minutes;

    hours = minutes / 60;
    minutes = minutes % 60;

    cout << "Hours = " << hours << " and " << minutes << endl;

    int students = 23;
    int group_size = 7;

    cout << "The last group to walk in will be " << students%group_size << " students." << endl;

    // bit-shifting
    int num = 0b111;
    cout << "Num = " << num << endl;
    num = num >> 2;
    cout << "Num >> 2 = " << (num) << endl;
    num = num << 2;
    cout << "Num << 2 = " << (num) << endl;

    int num1 = 2, num2 = 3;
    cout << "2^3 = " << (7^1) << endl;

    //String operation
    string fName = "John";
    string lName = "Smith";
    string space = " ";
    string fullName = fName + space + lName;
    cout << fullName << endl;


    float numeber = 0.5;
    
    return 0;
}