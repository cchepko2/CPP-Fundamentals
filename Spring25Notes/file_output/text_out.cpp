/*
Create a program that calculates a table of multiplication values and outputs as a csv file 
and formatted text file
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 10;

void print_formatted(double multiples[][SIZE])
{
    for(int i=0;i<=SIZE;i++)
    {
        cout << setw(6) << i;
    }
    cout << endl;

    for(int i=1;i<=SIZE;i++)
    {
        cout << setw(6) << i;
        for(int j=0;j<SIZE;j++)
        {
            cout << setw(6) << multiples[i-1][j];
        }
        cout << endl;
    }
}

void print_csv(double multiples[][SIZE])
{
    for(int i=0;i<=SIZE;i++)
    {
        cout << i << ',';
    }
    cout << endl;

    for(int i=1;i<=SIZE;i++)
    {
        cout << i << ',';
        for(int j=0;j<SIZE;j++)
        {
            cout << multiples[i-1][j] << ',';
        }
        cout << endl;
    }
}



int main(void)
{
    int i, j;

    double multiples[SIZE][SIZE];

    for(i=1; i<=SIZE; i++)
    {
        for(j=1;j<=SIZE;j++)
        {
            multiples[i-1][j-1] = i*j;
        }
    }

    print_formatted(multiples);
    print_csv(multiples);

    return 0;
}