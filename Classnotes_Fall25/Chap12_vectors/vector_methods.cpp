#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // For std::greater to sort backwards

using namespace std;

int main()
{
    vector<int> int_vector = {1, 3, 6};

    int_vector.insert(int_vector.begin()+1, 0);

    for(auto i = int_vector.begin(); i != int_vector.end(); i++)
    {
        cout << *i << endl;
    }

    int_vector.erase(int_vector.begin()+1);
    int_vector.

    for(auto i = int_vector.begin(); i != int_vector.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}