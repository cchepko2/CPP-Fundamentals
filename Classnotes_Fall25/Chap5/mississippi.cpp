#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    //while(again == 'y')
    while(i < 10)
    {
        if(i == 2)
        {
            i++;
            continue;
        }
        
        cout << i << ": Mississippi" << endl;

        if(i==5)
            break;

        i++;
    }

    return 0;
}