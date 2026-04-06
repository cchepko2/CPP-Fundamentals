#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> // for using max and min
using namespace std;

bool isConsecutiveFour(vector<int> values)
{
  for (int i = 0; i < values.size() - 3; i++)
  {
    bool isEqual = true;
    for (int j = i; j < i + 3; j++)
    {
      if (values[j] != values[j + 1])
      {
        isEqual = false;
        break;
      }
    }

    if (isEqual) return true;
  }

  return false;
}

bool isConsecutiveFour(const vector<vector<int> >& values)
{
  int numberOfRows = values.size();
  int numberOfColumns = values[0].size();

  // Check rows
  for (int i = 0; i < numberOfRows; i++)
  {
    if (isConsecutiveFour(values[i]))
      return true;
  }

  // Check columns
  for (int j = 0; j < numberOfColumns; j++)
  {
    vector<int> column(numberOfRows);
    // Get a column into an array
    for (int i = 0; i < numberOfRows; i++)
      column[i] = values[i][j];

    if (isConsecutiveFour(column))
      return true;
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

int main()
{
  cout << "Enter the number of rows: ";
  int numberOfRows;
  cin >> numberOfRows;

  cout << "Enter the number of columns: ";
  int numberOfColumns;
  cin >> numberOfColumns;

  cout << "Enter the array values: " << endl;
  vector<vector<int> > board(numberOfRows);
  for (int i = 0; i < board.size(); i++) {
    board[i] = vector<int>(numberOfColumns);
    for (int j = 0; j < numberOfColumns; j++)
      cin >> board[i][j];
  }

  cout << (isConsecutiveFour(board) ? 
    "The array has consecutive fours" : 
    "The array does not have consecutive fours")  << endl;

  return 0;
}