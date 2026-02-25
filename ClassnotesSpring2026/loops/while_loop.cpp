// While loops

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159

int main()
{
    char again = 'Y';

    while(again == 'Y')
    {
        cout << "Hello!" << endl;

        cout << "Want to go again? (Y/N): ";
        cin >> again;
    }

    do
    {
        cout << "Hello!" << endl;

        cout << "Want to go again? (Y/N): ";
        cin >> again;

    } while (again == 'Y');


    int count = 0;
    while(count < 10)
    {
        cout << count++ << endl;
    }

    double radians = 0.1;
    double degrees;
    double error = fabs(sin(radians) - radians)/sin(radians);

    cout << "Error = " << error << endl;
    while(error  < 0.05 )
    {
        degrees = radians*180/PI;
        cout << degrees << " still within 5%" << endl;

        radians += 0.01;
        error = fabs(sin(radians) - radians)/sin(radians);
    }

    //for(initial condition; condition; update)
    
    // Infinite loop
    /*for(;;)
    {
        cout << "Infinite hellos!" << endl;
    }*/

    for(count=0; count<10; count++)
    {
        cout << count << endl;
    }
    

    return 0;
}