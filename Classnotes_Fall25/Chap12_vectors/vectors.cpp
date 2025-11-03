#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // For std::greater to sort backwards

using namespace std;

bool lessor(int first, int second)
{
    return (first > second);
}

int main()
{
    vector<int> int_vector;

    int num_things;

    cerr << "Enter number of items: ";
    cin >> num_things;

    for(int i=0; i<num_things; i++)
    {
        int integer;
        cin >> integer;
        int_vector.push_back(integer);
    }

    //cout << "The size of the vector is: " << int_vector.size() << " elements." << endl;
    for(int i=0; i<int_vector.size(); i++)
    {
        //cout << int_vector[i] << '\t' << int_vector.at(i) << endl;
    }
    for(auto it = int_vector.begin(); it != int_vector.end(); it++)
    {
        //cout << *it << endl; // Since "it" is a pointer, we use the '*' operator
                            // to get the value
    }

    //sort(int_vector.begin(), int_vector.end(), greater());
    sort(int_vector.begin(), int_vector.end(), lessor);

    for(auto it = int_vector.begin(); it != int_vector.end(); it++)
    {
        //cout << *it << endl; // Since "it" is a pointer, we use the '*' operator
                            // to get the value
    }

    int alice=0, bob=0;

    for(int i=0; i<int_vector.size(); i+=2)
    {
        alice += int_vector[i];
        if(i < int_vector.size()-1)
        {
            bob += int_vector[i+1];
        }
    }

    cout << alice << ' ' << bob;


    return 0;
}