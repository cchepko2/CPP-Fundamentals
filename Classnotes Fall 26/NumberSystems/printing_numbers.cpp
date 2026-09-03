/*
Corin Chepko
9/3/26
Printing numbers in different bases
*/

#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
    int number = 17;
    char letter = 'A';

    cout << "Enter a number and a letter separated by spaces and I'll print both in hex and binary." << endl;
    cin >> number >> letter;

    cout << "number = " << number << endl;
    
    // Use "hex" keyword to make all future numbers print in hex
    // "showbase" keyword to show the 0x base
    cout << hex << showbase << "number = " << number << " in hexadecimal." << endl;

    // If we want to switch back to printing in decimal, 
    // use the "dec" keyword
    cout << dec << "number = " << number << " in decimal" << endl;

    // To print in binary, include the "bitset" library and
    // use the bitset funnction
    cout << "number in binary = 0b" << bitset<8>(number) << endl; 
    
    // Will just print the letter 'A'
    cout << "letter = " << letter << endl; 

    // Print the character as a number:
    cout << endl << "letter in decimal, hex and binary = " 
        << static_cast<int>(letter) << endl
        << hex << static_cast<int>(letter) << endl
        << bitset<8>(static_cast<int>(letter)) << dec << endl;

    return 0;
}