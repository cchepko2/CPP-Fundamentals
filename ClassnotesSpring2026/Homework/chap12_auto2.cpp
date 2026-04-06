/* input for this homework */

#include <iostream>
#include <vector>

using namespace std;

bool isConsecutiveFour_vector(const vector<int> values);
bool isConsecutiveFour_matrix(const vector<vector<int>> values);

int main()
{
    int columns;
    int rows;
    int temp;
    vector<vector<int>> matrix;
    vector<int> column_vals;

    cout << "Enter number of rows: ";
    cin >> rows;

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

    cout << boolalpha << isConsecutiveFour_matrix(matrix) << endl;

    return 0;
}

bool isConsecutiveFour_vector(const vector<int> values)
{
    int count = 0;
    int last = values[0];

    cout << endl << "Checking vector: " << endl;
    for(int i=0; i<values.size(); i++)
    {
        cout << values[i] << ' ';
    }
    cout << endl;

    for(int i=1; i<values.size(); i++)
    {
        if(values[i] == last)
            count++;
        else
            count = 0;
        
        if(count == 3)
        {
            return true;
        }

        last = values[i];
    }

    return false;
}

bool isConsecutiveFour_matrix(const vector<vector<int>> values)
{
    int rows = values.size();
    int columns = values[0].size();

    vector<int> check_vec;

    // Check each row
    for(int i=0; i<rows; i++)
    {
        if(isConsecutiveFour_vector(values[i]))
        {
            return true;
        }
    }

    // Construct column vectors
    for(int i=0; i<columns; i++)
    {
        for(int j=0; j<rows; j++)
        {
            check_vec.push_back(values[j][i]);
        }
        if(isConsecutiveFour_vector(check_vec))
        {
            return true;
        }
        check_vec.clear();
    }

    // Check major diagonal (lower part)
  for (int i = 0; i < numberOfRows - 3; i++)
  {
    int numberOfElementsInDiagonal
      = min(numberOfRows - i, numberOfColumns);
    vector<int> diagonal(numberOfElementsInDiagonal);
    for (int k = 0; k < numberOfElementsInDiagonal; k++)
      diagonal[k] = values[k + i][k];

    if (isConsecutiveFour(diagonal))
      return true;
  }

  // Check major diagonal (upper part)
  for (int j = 1; j < numberOfColumns - 3; j++)
  {
    int numberOfElementsInDiagonal
      = min(numberOfColumns - j, numberOfRows);
    vector<int> diagonal(numberOfElementsInDiagonal);
    for (int k = 0; k < numberOfElementsInDiagonal; k++)
      diagonal[k] = values[k][k + j];

    if (isConsecutiveFour(diagonal))
      return true;
  }

    // Check sub-diagonal (left part)
    for (int j = 3; j < numberOfColumns; j++)
    {
        int numberOfElementsInDiagonal
        = min(j + 1, numberOfRows);
        vector<int> diagonal(numberOfElementsInDiagonal);

        for (int k = 0; k < numberOfElementsInDiagonal; k++)
        diagonal[k] = values[k][j - k];

        if (isConsecutiveFour(diagonal))
        return true;
    }

    // Check sub-diagonal (right part)
    for (int i = 1; i < numberOfRows - 3; i++)
    {
        int numberOfElementsInDiagonal
        = min(numberOfRows - i, numberOfColumns);
        vector<int> diagonal(numberOfElementsInDiagonal);

        for (int k = 0; k < numberOfElementsInDiagonal; k++)
        diagonal[k] = values[k + i][numberOfColumns - k - 1];

        if (isConsecutiveFour(diagonal))
        return true;
    }


    return false;
}