#include <iostream>


using namespace std;

int main(void)
{
    int i = 213;  // this 'i' belongs to main function

    for(int i=0; i<10; i++)
    {
        // This repeats while i<10
        cout << "i = " << i << endl; // this 'i' is local to the for loop
    }

    cout << "i = " << i << endl;  // the for loop is over, only the main 'i'n exists now

    for(int i=10; i>0; i--)
    {
        // This repeats while i<10
        cout << "i = " << i << endl; // this 'i' is local to the for loop
    }

   /* for( ; ; ) { // infinite loop; no condition that stops the for loop
    cout << "Hello World!" << endl;
    }*/

    // example of break and continue
    // comment and uncomment break and continue to see how each works
    for(int i=1; i<=10; i++) {
        cout <<  i << ". Mississippi!\n";
        break; // This breaks out of the loop, so this loop only executes once
        cout << i << ". Hello World!\n";
        // continue;
    }

    for(int i=1; i<=10; i++) {
        cout <<  i << ". Mississippi!\n";
        //continue; // This moves the execution back to the top of the loop, the below code will not execute
        cout << i << ". Hello World!\n";
        // continue;
    }

    // example of range-based for loop
    cout << "before range-based loop...\n";
    for(int num: {1, 2, 4, 5, 6, 8, 9, 10}) {
        cout << num << ". Mississippi!\n";
    }
    cout << "after range-based loop... all done!";

    return 0;
}