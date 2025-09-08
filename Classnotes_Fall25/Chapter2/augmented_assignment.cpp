#include <iostream>

using namespace std;

int main()
{
    int x = 2, y = 3;

    cout << "x = " << x << endl;

    x += 8;
    cout << "x = " << x << endl;
    x %= 2;

    cout << "x = " << x << endl;

    int days = 30;
    int months = 12;
    int day_in_year = days*months;

    cout << "Days in a year = " << day_in_year << endl;

    int today = 247+day_in_year;

    int day_of_the_month = today % days;

    cout << "Aproximate day of month = " << day_of_the_month << endl;


    return 0;
}