#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{

    char middleinitial; // hard to read all lowercase name
    int temperature;
    unsigned int age;  // Declared varibles without an assigned value can have any value, not always set to 0

    cout << "age = " << age << endl;

    age = -1;
    cout << "age = -1 = " << age << endl;
    cout << "2^32 - 1 = " << pow(2,32)-1 << endl;

    // These two lines are the same. 
    // The acsii character code for'a' is the number 97
    middleinitial = 97;
    middleinitial = 'a';

    cout << "middleInitial = " << middleinitial << endl;

    return 0;
}