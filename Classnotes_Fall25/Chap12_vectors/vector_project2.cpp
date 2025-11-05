#include <iostream>
#include <vector>

using namespace std;

bool isConsecutiveFour(const vector<vector<int>> values);

int main()
{
    vector<vector<int>> numbers;
    vector<int> row;
    int number;
    int columns;
    int rows;

    //cout << "Enter numbers: " << endl;
    //cout << "Enter the number of columns: ";
    cin >> columns;
    cin >> rows;
    //cout << "Enter the array values: ";

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cin >> number;
            row.push_back(number);
        }
        numbers.push_back(row);
        row.clear();
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            //cout << numbers[i][j] << '\t';
        }
        //cout << endl;
    }

    //cout << boolalpha << isConsecutiveFour(numbers) << endl;
    if (isConsecutiveFour(numbers) == true)
    {
        cout << "The array has consecutive fours" << endl;
    }
    else
    {
        cout << "does not have consecutive fours" << endl;
    }

    return 0;
}

bool isConsecutiveFour(const vector<vector<int>> values)
{
    int count = 0;
    int last_number = values[0][0];
    bool found = false;
    int columns = values[0].size();
    int rows = values.size();

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            if(values[i][j] == last_number)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if(count == 3)
            {
                found = true;
                break;
            }
            last_number = values[i][j];
        }

        if( found )
        {
            //cout << "Found consective " << last_number << "'s" << endl;
            break;
        }
        
    }
    
    return found;
}