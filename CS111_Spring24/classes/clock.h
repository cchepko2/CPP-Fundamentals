#include <iostream>

#ifndef ClockClass
#define ClockClass

using namespace std;

class Clock
{
private:
    int num_clocks = 0;
public:
    int seconds, minutes, hours;
    Clock();
    Clock(int s);
    Clock(int s, int m, int h);
    ~Clock();

};



#endif