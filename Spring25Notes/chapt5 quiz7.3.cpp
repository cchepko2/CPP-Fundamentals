#include <iostream>

using namespace std;

int main()
{

    cout << "Enter a positive integer to start the sequence: ";
    int un;
    cin >> un;
    int counter = 0;
    int next=un;
    cout << "The sequence is" << endl;
    do
    {
    cout << "u" << counter << " = " << un << "\n";
    // WRITE YOUR CODE to update un
    if( (un % 2) == 0)
    {
        next = un/2;
    }
    else
    {
        next = un*3+1;
    }
    un = next;
    counter++;
    }
    while (un != 1);
    cout << "u" << counter << " = " << un << "\n";

    return 0;
}