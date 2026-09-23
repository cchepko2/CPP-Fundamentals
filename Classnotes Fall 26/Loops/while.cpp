#include <iostream>

using namespace std;

int main()
{
    int counter = 1;

    while(counter <= 50)
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
    }

    return 0;
}

