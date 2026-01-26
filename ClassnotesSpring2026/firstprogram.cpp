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
  int a = 10;
  int b = 12;

  cout << "Address of variable 'a' is " << &a << endl;
  cout << "Address of variable 'b' is " << &b << endl;
    // output Hello World!
    cout << "Hello World\"" << "!";
    cout << "Hello World!";

    return 0;
}