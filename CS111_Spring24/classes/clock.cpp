#include <iostream>
#include "clock.h"

using namespace std;

Clock::Clock()
{
    seconds = 0;
    minutes = 0;
    hours = 0;
    cout << "I'm constructed!" << " " << num_clocks << endl;
    num_clocks++;
}
Clock::Clock(int s)
{
    minutes = s/60;
    seconds = s%60;
    hours = minutes / 60;
    minutes = minutes%60;
    num_clocks = 10;
}
Clock::Clock(int s, int m, int h)
{
    if(s >= 60)
        seconds = 0;
    else
        seconds = s;

    if(m>=60)
    minutes = 0;
    else
        minutes = m;

    hours = h;
    cout << "I'm contructed with a paramaterized constructor!" 
        << " " << num_clocks << endl;
    num_clocks++;
}
Clock::~Clock()
{
    cout << "Ahhhhh! It hurts!" << endl;
    cout << "Clocks = " << num_clocks << endl;
    num_clocks--;
}