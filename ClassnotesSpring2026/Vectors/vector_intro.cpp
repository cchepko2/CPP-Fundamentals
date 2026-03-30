#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector<double> numbers;

    vector<double> numbers = {1, 2, 3, 4, 5};

    cout << numbers.max_size() << endl;

    for(auto num: numbers)
    {
        cout << num << endl;
    }
    for(int i=0; i<numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    cout << numbers[10] << endl;

    numbers.pop_back();
    numbers.push_back(99.99999);

    cout << endl << endl;
    for(auto num: numbers)
    {
        cout << num << endl;
    }

    return 0;
}