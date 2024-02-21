/*
Corin Chepko
2/21/24
Kattis Problem: Stopwatch
Algorithm:
    collect input for number of following inputs of times
    if number is odd, output "Still running"
    if number is even:
        take difference between every other input and add to total time
*/

#include <iostream>

using namespace std;

int main(void)
{
    int number;
    int total = 0;
    int num1, num2;
    string answer = "still running";
    
    cin >> number;

    if(number%2 == 0) // If even, loop through and find total seconds
    {
        for(int i=0; i<number/2; i++)
        {
            cin >> num1 >> num2; // This will read two numbers, one per line
            total += num2 - num1;
        }
        cout << total << endl;
    }
    else
    {
        cout << answer << endl;
    }

    return 0;
}