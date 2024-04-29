#include <iostream>

#ifndef ClockClass
#define ClockClass

using namespace std;

class Clock
{
private:
    int minutes, hours;
    double seconds;
public:
    Clock();
    Clock(double s);
    Clock(int s, int m, int h);
    ~Clock();
    void increment(double s);
    void setTime(int h, int m, int s);
    void displayTime(void);
};



#endif