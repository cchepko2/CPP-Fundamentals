#include <iostream>


using namespace std;

int main(void)
{
    double angle;
    bool good_input = false;

    while(good_input == false)
    {
        cin >> angle; // if this sees something besides a number, cin enters
                    // a fail state, which needs to be cleared for further input
        if (cin.fail()) //checking whether failbit or badbit is set
        {
            cout<<"error";
            cin.clear(); //sets a new value for the stream's internal error state flags.
            cin.ignore(10000,'\n'); //ignores rest of the input ..
        }
        else
        {
            if(angle >= 0 || angle <= 90)
            {
                good_input = true;
            }
            cout << "angle is " << angle << endl;
        }
    }

    return 0;
}