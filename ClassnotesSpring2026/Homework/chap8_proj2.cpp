#include <iostream>

using namespace std;

const int N = 3;
void addMatrix(const double a[][N],const double b[][N], double c[][N]);

int main()
{
    double a[N][N], b[N][N], c[N][N];

    cout << "Enter Matrix1: ";
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter Matrix2: ";
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin >> b[i][j];
        }
    }

    addMatrix(a, b, c);

    cout << "The addition of the matrices is" << endl;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout << a[i][j] << ' ';
        }
        if(i==1)
        {
           cout << " +  "; 
        }
        else
        {
            cout << "    ";
        }
        for(int j=0; j<N; j++)
        {
            cout << b[i][j] << ' ';
        }

        if(i==1)
        {
           cout << " =  "; 
        }
        else
        {
            cout << "    ";
        }
        for(int j=0; j<N; j++)
        {
            cout << c[i][j] << ' ';
        }

        cout << endl;
    }

    return 0;
}

void addMatrix(const double a[][N],const double b[][N], double c[][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}