#include <iostream>

using namespace std;

int main()
{
    // Write your code below
    int counter = 1;
    string greeting;
    do
    {
        if( counter%10 == 0 )
        {
            greeting = "Goodbye World!";
        }
        else{
            greeting = "Hello World!";
        }
        cout << greeting << endl;
        counter++;
    }while(counter<=50);

    return 0;
}