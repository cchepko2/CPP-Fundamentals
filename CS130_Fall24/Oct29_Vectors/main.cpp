#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    double grades_array[] = {1.0, 99, 81, 76, 40};
    vector<double> grades_vector = {1.0, 99, 81, 76, 40};

    for(int i=0; i<sizeof(grades_array)/sizeof(grades_array[0]); i++)
    {
        cout << grades_array[i] << endl;
    }
    for(auto val: grades_array)
    {
        cout << val << endl;
    }
    cout << "That was the array.\n\n";

    for(int i=0; i<grades_vector.size(); i++)
    {
        cout << grades_vector[i] << endl;
    }
    for(auto val: grades_vector)
    {
        cout << val << endl;
    }
    cout << "That was the vector.\n\n";

    cout << "Grades vector size = " << grades_vector.size() << endl;
    cout << "Grades vector first val = " << grades_vector.front() << endl;
    cout << "Grades vector last val = " << grades_vector.back() << endl;

    grades_vector.push_back(55.555);
    cout << "Grades vector size = " << grades_vector.size() << endl;

    grades_vector.pop_back();
    cout << "Grades vector size = " << grades_vector.size() << endl;

    return 0;
}