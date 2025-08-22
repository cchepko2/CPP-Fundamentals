/*
Programmer: Corin Chepko
Date: 9/20/25
Description: Hello World Program
*/

#include <iostream>

// Include the std namespace so we don't have to type "std::" before every cout statement
using namespace std;

int main(void)
{
    // A type char variable, will take the character corresponding the the ascii number
    // These two lines are the same
    char letter = 'A'+32;
    int number = 0b1010;
    //char letter = 65;

    cout << "The size of char letter is " << sizeof(letter) << " bytes." << endl;
    cout << "The value of number is " << number << endl;

    cout << letter << endl;
    cout << "Hello \n World!" << endl;

    return 0;
}