#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t total_seconds = time(0);

    int seconds = total_seconds%60;
    int minutes = (total_seconds/60)%60;

    // Subtract 7 for mountain time
    int hours = (total_seconds/3600)%24 - 7;


    cout << hours << ':' << minutes << ':' << seconds << endl;


    int one_two_eight = 128;
    cout << one_two_eight << endl;
    one_two_eight = one_two_eight >> 2; 
    cout << one_two_eight << endl;
    one_two_eight = one_two_eight << 3; 
    cout << one_two_eight << endl;


    return 0;
}