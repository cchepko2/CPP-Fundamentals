/*=================================================
  Hello World program
  Author: Ram Basnet
  Date: June 24, 2020
  Copyright: MIT License
  
  The program prints "Hello World!" on the console
===================================================*/

// include required libraries/header files
#include <iostream>

// Using standard namespace, means we don't need to type 
// std:: in front of all our input and output coommands
using namespace std;

// one main function is always required in a C++ program
int main() // main entry to the program 
{
    // Signed integers that have a 1 as the first digit are negative
    int num = 0b11111111111111111111111111111111;
    int neg_big = 0b10000000000000000000000000000000;

    cout << num << endl;
    cout << neg_big << endl;

    return 0;
}