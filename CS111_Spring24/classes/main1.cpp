#include <iostream>
#include "clock.h"

using namespace std;

void call_clocks(void)
{
    Clock currentTime; // By default, an empty constructor is used when none are specified
    Clock someotherTimezone(0,0,1);
    Clock currentTime_plus203455(6331);
    
    currentTime.displayTime();

    someotherTimezone.displayTime();
    
    currentTime_plus203455.displayTime();

    currentTime_plus203455.increment(3601.25);

    currentTime_plus203455.displayTime();

    //currentTime_plus203455.seconds = 100;

    currentTime_plus203455.displayTime();

}

int main(void)
{
    cout << "Started; about to call_clocks()..." << endl;
    call_clocks();
    cout << "Done with call_clocks()" << endl;

    return 0;
}