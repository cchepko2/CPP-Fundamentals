/*
Author: Corin Chepko
Date: 9/18/24
Program Info: kattis problem - https://open.kattis.com/problems/spavanac
Algorithm Steps:
    declare three integers, hours, minutes, answer
    input hours and minutes
    convert time to minutes after midnight
    subtract 45 minutes from time
*/

#include <iostream>

using namespace std;

int main(void)
{
    int hours, minutes, answer;
    int total_minutes;

    cin >> hours >> minutes;

    total_minutes = hours*60 + minutes;

    total_minutes -= 45;
    // Add 24hours of minutes amd modulus in case total minutes goes negative
    total_minutes = (total_minutes+(24*60))%(24*60);

    // convert total_minutes back to hour/minutes
    hours = ((total_minutes/60)+24)%24;
    minutes = total_minutes%60;

    cout << hours << ' ' << minutes << endl;

    return 0;
}