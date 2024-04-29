#include <iostream>
#include <cmath>
#include "clock.h"

using namespace std;

Clock::Clock()
{
    seconds = 0;
    minutes = 0;
    hours = 0;
    cout << "I'm constructed!" << " " << endl;
}
Clock::Clock(double s)
{
    minutes = s/60;
    seconds = fmod(s,60);
    hours = minutes / 60;
    minutes = minutes%60;
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
    cout << "I'm contructed with a paramaterized constructor!" << endl;
}
Clock::~Clock()
{
    cout << "Destructing!" << endl;
}
void Clock::increment(double s)
{
    seconds += s;
    while(seconds >= 60)
    {
        minutes++;
        seconds -= 60;
    }
    while(minutes>=60)
    {
        hours++;
        minutes -= 60;
    }
}

void Clock::setTime(int h, int m, int s)
{
    seconds = s;
    minutes = m;
    hours = h;
}
void Clock::displayTime(void)
{
    cout << hours << ':' << minutes << ':'
            << seconds << endl;
}