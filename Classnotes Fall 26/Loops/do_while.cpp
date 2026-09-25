#include <iostream>

using namespace std;

int main()
{
    int counter = 1;

    do
    {  
        if(counter%10 != 0)
        {
            cout << "Hello, World!" << endl;
        }
        else
        {
            cout << "Goodbye, World" << endl;
        }

        counter++;
    } while(counter <= 50);

    return 0;
}