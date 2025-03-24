#include <iostream>
#include <algorithm> // For the sort() function
#include <iterator>  // For the begin() and end() iterators
#include <functional> //greater<>()

using namespace std;

void print_grades(float grades[], int num_elements)
{
    for(int i=0; i<num_elements; i++)
    {
        cout << grades[i] << ",";
    }
    cout << endl;
}
void print_grades(string grades[], int num_elements)
{
    for(int i=0; i<num_elements; i++)
    {
        cout << grades[i] << ",";
    }
    cout << endl;
}

bool compare(float a, float b)
{
    // return the thing we want to be true
    return a > b;
}

int main()
{
    float grades[] = {81,23,44,99,54,88,77};
    string numbers[] = {"1", "12", "2", "102", "3", "4"};

    // We want to sort the grades array in ascending order
    int num_elements = sizeof(grades)/sizeof(grades[0]);
    print_grades(grades, num_elements);

    sort(begin(grades), end(grades));
    print_grades(grades, num_elements);
    // Now sort backwards, both are equivalents, except the 2nd one uses our own compare function
    sort(begin(grades), end(grades), compare);
    sort(begin(grades), end(grades), greater<float>());
    print_grades(grades, num_elements);



    print_grades(numbers, 6);
    sort(begin(numbers), end(numbers));
    print_grades(numbers, 6);
    // Now sort backwards
    sort(begin(numbers), end(numbers), greater<string>());
    print_grades(numbers, 6);

    return 0;
}

