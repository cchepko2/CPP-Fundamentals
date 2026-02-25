#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("numbers.txt");
    if( !fin.is_open() )
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    double sum=0;
    double number;

    fin >> number;
    cout << number << endl;

    while( fin >> number)
    {
        sum += number;
        cout << number << endl;
    }
    cout << "Sum = " << sum << endl;

    fin.close();

    return 0;
}