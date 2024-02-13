#include <iostream>


using namespace std;

int main(void)
{
    int x = 10;
    int y = 20;
    char answer;
    char units;
    int velocity = 8; // in ft / s

    cout << (x == 10) << endl;
    cout << (x <= 10) << endl;
    cout << (x != 10) << endl;
    cout << (x > y) << endl;
    cout << (x < y) << endl;

    cout << "Would you like to continue the program?" << endl;
    cin >> answer;

    if(answer == 'n' || answer == 'N')
    {
        cout << "Ending the program..." << endl;
       return 0;  // if the user says no, the program ends here
    }

    cout << "The program is continuing..."  << endl;

    cout << "Enter 'f' for feet or 'm' for meters: " << endl;
    cin >> units;
    if( units == 'm' or units == 'M')
    {
        /*1 foot = 0.3048m
        1 meter = 3.28ft*/
        velocity = velocity*0.3048;
        cout << "Velocity is " << velocity << " m/s" << endl;
    }
    else
    {
        cout << "Velocity is " << velocity << " ft/s" << endl;
    }

    



    return 0;   // Return is the ending of a function, in this case main, 
                // when a return statement is hit, the program will end
}