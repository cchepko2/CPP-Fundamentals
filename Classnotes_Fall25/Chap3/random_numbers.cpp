/*Generate random numbers*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int random_int;

    srand(time(0));  // Use time(0) for a randomish seed

    int seconds_in_day = time(0)%(86400);
    cout << "It is " << seconds_in_day/3600 << endl;

    cout << time(0)%(86400) << endl;

    for(int i=0; i<1000; i++)
    {
        random_int = rand();
        cout << "Random int = " << random_int << endl;
    }
    cout << "RAND_MAX = " << RAND_MAX << endl;
    cout << "Random between 0 - 9: " << random_int % 10 << endl;
    cout << "Random floating point between 0 and 10: " << random_int*10.0/RAND_MAX << endl;

    cout << "random int = " << random_int << endl;


    int A = 0x0F;
    int B = 0x80;

    cout << "A && B = " << boolalpha << (A&&B) << endl;  // Same as statement as below
    cout << "A and B = " << boolalpha << (A and B) << endl;

    // This is a bitwise "AND", a totally different operation
    cout << "A & B = " << (A&B) << endl;


    int age = 15;
    bool season_pass = false;

    cout << "Too middle aged for a discount = " << 
        (((16 < age) and (age < 65)) or season_pass) << endl;

    return 0;
}