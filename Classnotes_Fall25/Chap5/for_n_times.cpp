#include <iostream>

using namespace std;

int main()
{
    /*int i = 0;

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
    }*/

    int i = 5;

    for(int i=0; i<10; i++)
    {
        cout << i << ": Hello!" << endl;
    }

    for(i=0 ; ; i++) { // infinite loop; no condition that stops the for loop
    cout << i << ": Hello World!" << endl;
    }

    cout << i << endl;

    return 0;
}