#include <iostream>

using namespace std;

const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize,int columnIndex);

int main()
{
    double data[3][4];

    cout << "Enter a 3-by-4 matrix row by row: " << endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> data[i][j];
        }
    }

    for(int i=0; i<4; i++)
    {
        double sum = sumColumn(data, 3, i);
        cout << "Sum of the elements at column " << i << " is " << sum << endl;
    }

    return 0;
}

double sumColumn(const double m[][SIZE], int rowSize,int columnIndex)
{
    double sum = 0;
    for(int i=0; i<rowSize; i++)
    {
        sum += m[i][columnIndex];
    }

    return sum;
}