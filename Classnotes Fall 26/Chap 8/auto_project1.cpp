#include <iostream>

using namespace std;

const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize,int columnIndex);

int main()
{
    double matrix[3][SIZE];
    double column_sum = 0;

    cout << "Enter a 3-by-4 matrix row by row:" << endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i=0; i<3; i++)
    {
        column_sum = sumColumn(matrix, 3, i);
        cout << "Sum of the elements at column " << i << " is " 
            << column_sum << endl;
    }

    return 0;
}

double sumColumn(const double m[][SIZE], int rowSize,int columnIndex)
{
    double sum = 0;

    for(int i=0; i<rowSize; i++)
    {
        cout << m[columnIndex][i] << " ";
        sum += m[i][columnIndex];
    }
    cout << endl;

    return sum;
}