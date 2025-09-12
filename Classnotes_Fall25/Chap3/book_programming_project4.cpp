#include <iostream>

using namespace std;

int main(void)
{
    int year, month, day, h;
    string day_of_week;

    cout << "Enter year: (e.g., 2012): ";
    cin >> year;

    cout << "Enter month: 1-12: ";
    cin >> month;
    if(month == 1 or month == 2)
    {
        month += 12;
        year -= 1;
    }

    cout << "Enter day of the month: 1-31: ";
    cin >> day;

    h = (day + 26*(month + 1)/10 + (year%100) + (year%100)/4 + (year/100)/4 + 5*year/100)%7;

    switch(h)
    {
        case 0:
            day_of_week = "Saturday";
            break;
        case 1:
            day_of_week = "Sunday";
            break;
        case 2:
            day_of_week = "Monday";
            break;
        case 3:
            day_of_week = "Tuesday";
            break;
        case 4:
            day_of_week = "Wednesday";
            break;
        case 5:
            day_of_week = "Thursday";
            break;
        case 6:
            day_of_week = "Friday";
            break;

    }
    cout << "Day of the week is " << day_of_week << endl;

    return 0;
}
