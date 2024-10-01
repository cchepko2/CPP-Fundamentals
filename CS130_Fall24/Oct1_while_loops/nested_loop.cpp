// function prints multiplication table using nested loop
// print_multiples function is replaced with its actual code
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int multiply(int i, int j)
{
    return i*j;
}

void multiplicationTable() {
    for(int i=1; i<=10; i++) { // for each i... (row)
        for(int j=1; j<=10; j++) // for each column
            cout << left << setw(5) << multiply(i, j);
        cout << endl;
    }
}

int main(void)
{
    
    multiplicationTable();

    return 0;
}