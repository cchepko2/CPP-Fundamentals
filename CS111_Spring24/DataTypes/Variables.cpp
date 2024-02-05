#include <iostream>

#define MAX_CHARS 260

using namespace std;

int main(void)
{
    char middleinitial = 'a'; // hard to read all lowercase name
    unsigned int age = 24; //Declaration and assignment in one line
    double space_shuttle_velocity;
    //const double PI = 3.14159;
    string name = "Corin";
    string phrase = "\n\n\nSomething\r to say\nNext line\tA tab\n";

    space_shuttle_velocity = 6000.0; // Variable assignment
    middleinitial = middleinitial - 32;

    cout << "Hello " << name << " " << middleinitial << '\n';
    cout << "Age: " << age << endl;
    cout << "Space Shuttle Velocity: " << space_shuttle_velocity << endl;
    cout << "Number of double\n values in 1 MB: " << 1024*1024/sizeof(double) << endl;
    
    cout << phrase;

    string line = "\"Oh no!\", Alice exclaimed, \"Bob's bike is broken!\"";
    cout << endl << line << endl;

    return 0;
}