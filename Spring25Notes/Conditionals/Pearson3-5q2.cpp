/*
Print the letter grade based on a score
*/

#include <iostream>

using namespace std;

int main()
{
    double gpa = 2.5; 
    int extracurriculars; 
    int serviceHours;
    int scholarshipLevel;

    if(gpa >= 3.8)
    {
        scholarshipLevel = 1;
        if( extracurriculars >= 2)
        {
            scholarshipLevel = 2;
            if( serviceHours >= 50)
            {
                scholarshipLevel = 2;
            }
        }
    }
    else
    {
        scholarshipLevel = 0;
    }

    
    

    return 0;
}