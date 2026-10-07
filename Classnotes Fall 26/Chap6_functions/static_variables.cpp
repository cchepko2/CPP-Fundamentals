// Static variables

#include <iostream>

using namespace std;

double rolling_average(double data, int size);

int main()
{
    int size = 10;
    double data_t = 100.0;

    for(int i=0; i<100; i++)
    {
        cout << rolling_average(data_t, size) << endl;
    }

    return 0;
}

double indexing_function(double data, int size)
{
    static double average = 0;

    average += data;

    return average/size;
}