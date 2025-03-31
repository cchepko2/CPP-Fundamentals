#include <iostream>
#include <vector>

using namespace std;

template<class T>
void print_vector(T things)
{
    for( auto thing:things )
    {
        cout << thing << ' ';
    }
    cout << endl;
}

int main(void)
{
    vector<int> numbers = {1,2,3,4,5,6,7,8,9};
    vector<string> names = {"Corin", "John", "Rose", "Alice", "Sarah"};

    print_vector(numbers);
    print_vector(names);


    return 0;
}