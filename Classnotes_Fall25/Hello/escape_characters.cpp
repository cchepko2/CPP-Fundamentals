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
    string solution = "My solution is\rbonkered!\n";
    cout << solution;

    string phrase =  "\"Oh no!\", Alice\\ exclaimed, \"Bob's bike is broken!\"\n";
    cout << phrase;
    return 0;
}