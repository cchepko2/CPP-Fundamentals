/*=================================================
  Hello World program
  Author: Ram Basnet
  Date: June 24, 2020
  Copyright: MIT License
  
  The program prints "Hello World!" on the console
===================================================*/

// include required libraries/header files
#include <iostream>

// Define a constant with a preprocessor directive
#define PI 3.14159

// Using standard namespace, means we don't need to type 
// std:: in front of all our input and output coommands
using namespace std;

// one main function is always required in a C++ program
int main() // main entry to the program 
{
    int temperature = 0, temperature2 = 392;
    temperature2 = 'a';

    // Declare a constant
    const double gravity = 9.81;

    cout << "Temperature = " << temperature << endl;
    cout << "Temperature2 = " << temperature2 << endl;

    string greeting = "What's up\r Shaq\tO'Neal?";
    cout << greeting << endl;

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Nice to meet you " << name << endl;
   

    return 0;
}