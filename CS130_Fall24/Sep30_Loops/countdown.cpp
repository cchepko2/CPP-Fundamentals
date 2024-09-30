#include <iostream>
#include <unistd.h>

using namespace std;

int main(void)
{
    int number = 0;

    for(int i=10; i>=0; i--) {
    if (i == 0)
            cout << "Blast Off!!!" << endl;
        else {
            cout << i << endl;
            usleep(1000000); // sleep for 1e6 microseconds = 1 second 
        }
    }

    


    return 0;
}