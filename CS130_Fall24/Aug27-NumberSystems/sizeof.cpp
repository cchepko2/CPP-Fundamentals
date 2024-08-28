#include <iostream>
#include <bitset>


using namespace std;

int main(void)
{
    cout << "Hello!" << endl;

    bool true_false = false;
    char letter = 'A';
    int number = 0xA0;
    double pi = 3.14159;

    cout << true_false << endl;
    cout << "sizeof(number) is " << sizeof(number) << " bytes." << endl;
    cout << "pi = " << pi << " and the size is " << sizeof(pi) 
        << " bytes." << endl;
    
    cout << "number in base 10 = " << number << endl;
    cout << "number in octadecimal = " << oct << number << endl;
    cout << "number in hexadecimal = " << hex << number << endl;

    letter = letter + (97-65) + 1;
    cout << dec << "letter = " << letter;

    return 0;
}