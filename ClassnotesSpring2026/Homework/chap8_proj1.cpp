#include <iostream>

using namespace std;

const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize,int columnIndex);

int main()
{
    double m[3][4];
    int rowSize = 3;
    double sum;

    cout << "Enter a 3-by-4 matrix row by row: ";
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            cin >> m[i][j];
        }
    }
    
    for(int i=0; i<SIZE; i++)
    {
        sum = sumColumn(m, rowSize, i);
        cout << "Sum of the elements at column " 
            << i << " is " << sum << endl;
    }

    return 0;
}

double sumColumn(const double m[][SIZE], int rowSize,int columnIndex)
{
    double sum = 0;
    for(int i=0; i<SIZE; i++)
    {
        sum += m[columnIndex][i];
    }

    return sum;
}