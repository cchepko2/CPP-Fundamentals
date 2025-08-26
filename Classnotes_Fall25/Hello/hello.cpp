/*
Programmer: Corin Chepko
Date: 9/20/25
Description: Hello World Program
*/

#include <iostream>
#include <stdio.h>

#define PI 3.1459

// Include the std namespace so we don't have to type "std::" before every cout statement
using namespace std;

int main(void)
{
    // A type char variable, will take the character corresponding the the ascii number
    // These two lines are the same
    char letter = 'A'+32;
    string name = "Corin Chepko";

    //int number = 0b01111111111111111111111111111111;
    int number = 0b00010110;
    int neg_num = 0b10000000000000000000000000000000;
    float f_number = 6.2;

    //char letter = 65;

    cout << "The size of char letter is " << sizeof(letter) << " bytes." << endl;
    cout << "The value of number is " << number << endl;
    cout << "The value of neg number is " << neg_num << endl;
    printf("f_number = %.8f\n", f_number);

    cout << letter << endl;
    cout << "Hello \n World!" << endl;

    cout << "PI = " << PI << endl;
    cout << "PI ~= " << 22/2. << endl;

    return 0;
}