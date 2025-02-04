/*
Corin Chepko
2-4-25
Program: Kattis Problem - https://open.kattis.com/problems/spavanac
Alorithm Steps:
    Collect two integers, the hours and minutes
    Convert time to minutes after midnight, subtract 45
    Convert back to hours and minutes
    Print time
*/

#include <iostream>

using namespace std;

int main()
{
    int hours, minutes, min_after_mid;
    
    cerr << "Please enter hours and minutes: " << endl;

    cin >> hours >> minutes;
    
    // In case hours starts at 0, add 24 and modulus later
    hours += 24;

    min_after_mid = hours*60 + minutes;

    // Same as min_after_mid = min_after_mid - 45
    min_after_mid -= 45;

    hours = (min_after_mid / 60)%24;
    minutes = min_after_mid % 60;

    cout << hours << " " << minutes << endl;    

    return 0;
}