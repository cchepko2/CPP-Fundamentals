#include <iostream>
#include "clock.h"

using namespace std;

void call_clocks(void)
{
    Clock currentTime; // By default, an empty constructor is used when none are specified
    Clock someotherTimezone(0,0,1);
    Clock currentTime_plus203455(6331);
    cout << currentTime.hours << ':' << currentTime.minutes << ':'
            << currentTime.seconds << endl;

    cout << someotherTimezone.hours << ':' << someotherTimezone.minutes << ':'
            << someotherTimezone.seconds << endl;
    
    cout << currentTime_plus203455.hours << ':' << currentTime_plus203455.minutes << ':'
            << currentTime_plus203455.seconds << endl;

}

int main(void)
{
    cout << "Started; about to call_clocks()..." << endl;
    call_clocks();
    cout << "Done with call_clocks()" << endl;

    return 0;
}