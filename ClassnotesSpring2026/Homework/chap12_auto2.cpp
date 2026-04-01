/* input for this homework */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int columns;
    int rows = 6;
    int temp;
    vector<vector<int>> matrix;
    vector<int> column_vals;

    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter the array values:" << endl;

    for(int i=0; i<rows; i++)
    {
        // input inner vector of values
        for(int j=0; j<columns; j++)
        {
            cin >> temp;
            column_vals.push_back(temp);
        }
        matrix.push_back(column_vals);
        column_vals.clear();
    }


    cout << endl << endl;

    // Check output of matrix
    for(int i=0; i<rows; i++)
    {
        // input inner vector of values
        for(int j=0; j<columns; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}