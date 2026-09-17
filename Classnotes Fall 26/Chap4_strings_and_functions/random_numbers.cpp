#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int random_int;
    srand(time(NULL));

    for(int i=0; i<10; i++)
    {
        random_int = rand();


        cout << "My random int is " << random_int%10 << endl;
    }

    cout << RAND_MAX << endl;

    return 0;
}