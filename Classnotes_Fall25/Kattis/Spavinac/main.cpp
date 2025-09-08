/*
Programmer: Corin Chepko
Date: 9/4/25
Program: Kattis Problem - https://open.kattis.com/problems/spavanac
Algorithm Steps:
    input hours
    input minutes
    convert to minutes in day
    subtract 45 minutes
    Somethimg else?
    Convert back to hours and minutes
    Cout hours minutes
*/


#include <iostream>

using namespace std;

int main()
{
    int hours, minutes, minutes_in_day, total_minutes_per_day = 24*60;

    // cerr lines are ignored by Kattis
    cerr << "Enter hours and minutes separted by a space: ";

    cin >> hours >> minutes;

    minutes_in_day = (hours*60 + minutes)-45;

    minutes_in_day = (total_minutes_per_day+minutes_in_day)%total_minutes_per_day;
    
    hours = minutes_in_day/60; 
    minutes = (minutes_in_day)%60;


    cout << hours << ' ' << minutes << endl;

    return 0;
}