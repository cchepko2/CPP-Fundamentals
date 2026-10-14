#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    double multiplication_table[10][10];
    vector<vector<double>> multi_table;

    vector<double> experiment;
    experiment.push_back(99.9999999);
    cout << experiment.size() << endl;
    cout << experiment.at(0) << endl;
    experiment.clear();

    for(int i=1; i<=10; i++)
    {
        vector<double> row;
        for(int j=1; j<=10; j++)
        {
            multiplication_table[i-1][j-1] = i*j;
            row.push_back(i*j);
        }
        multi_table.push_back(row);
    }

    cout << fixed << setprecision(2);

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            //cout << setw(7) << multiplication_table[i][j];
            cout << setw(7) << multi_table[i][j];
        }
        cout << endl;
    }



    cout << "Here's your 2d table! Learn to multiply!" << endl;

    return 0;
}