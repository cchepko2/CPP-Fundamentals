#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    int total_second_since_1_1_1970 = time(0);

    cout << "Second since Jan 1 1970 = " << total_second_since_1_1_1970 << endl;

    int second = total_second_since_1_1_1970 % 60;
    cout << "The second is: " << second << endl;

    int total_minutes = total_second_since_1_1_1970/60;
    int minute = total_minutes%60;
    cout << "Minute: " << minute << endl;

    int total_hours_mountain = (total_minutes/60 - 7);
    int hour = total_hours_mountain%24;
    cout << "Hour: " << hour << endl;

    int days_total = total_hours_mountain/24;
    double day = days_total/365.24;

    cout << "Day of year: " << day << endl;

    

    // Casting from one type to another
    // Preferred way, a statit cast
    int int_day = static_cast<int>(day);
    // The C way
    int_day = (int)day; 


    return 0;
}