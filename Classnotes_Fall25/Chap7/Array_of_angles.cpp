/*
Create an array of angles, evenly spaced, 
between 0 and 90 degrees
*/


#include <iostream>
#include <iomanip>
#include <fstream>

#define SIZE 5

const int NUM_ANGLES = 11;

using namespace std;

int main(void)
{
    double angles[NUM_ANGLES];
    double angle_inc = 90/(NUM_ANGLES-1);
    
    for(int i=0; i<NUM_ANGLES; i++)
    {
        angles[i] = i*angle_inc;
    }

    // Print to console, each in a width of 6 spaces, left aligned
    for(int i=0; i<NUM_ANGLES; i++)
    {
        cout << setw(6);
        cout << left << angles[i]; 
    }

    // Print to file out, each in a width of 6 spaces, left aligned
    ofstream fout("angles.txt");
    for(int i=0; i<NUM_ANGLES; i++)
    {
        fout << setw(6);
        fout << left << angles[i]; 
    }
    fout.close();

    

    return 0;
}