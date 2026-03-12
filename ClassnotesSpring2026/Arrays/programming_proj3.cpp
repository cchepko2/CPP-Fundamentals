/*
Pearson problem: Chap 7 programming project 3

Write a program that reads in 10 numbers and 
displays distinct numbers in the order of input 
and separated by exactly one space 
(i.e., if a number appears multiple times, 
it is displayed only once). 
(Suggestion: Read a number and store it to an array 
if it is new. If the number is already in the array, 
discard it. After the input, the array contains the 
distinct numbers.)
*/


#include <iostream>

using namespace std;

int main()
{
    int numbers[10];
    bool flag = 0;
    int curr_number;

    cout << "Enter ten integers: ";

    int total_unique = 0;

    for(int i=0; i<10; i++)
    {
        cin >> curr_number;

        // Search array up to collected values to find 
        // a repeat
        for(int j=0; j<i; j++)
        {
            // If it is a repeat
            if(curr_number == numbers[j])
            {
                flag = true;
            }
        }

        if(!flag)
        {
            numbers[total_unique] = curr_number;
            total_unique += 1;
        }
        else{
            flag = false;
        }

    }

    cout << "The number of distinct numbers is " 
            << total_unique << endl;

    cout << "The distinct numbers are: "; 
    for(int i=0; i<total_unique; i++)
    {
        cout << numbers[i] << ' ';
    }
    cout << endl;
    

    return 0;
}
