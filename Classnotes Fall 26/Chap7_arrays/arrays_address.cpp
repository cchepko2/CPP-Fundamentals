#include <iostream>

using namespace std;

int main()
{
    int ten_numbers[10];  // Static array

    //1st value
    ten_numbers[0] = 1;
    ten_numbers[9] = 10;

    cout << "ten_numbers is at " << 
        ten_numbers << " in memory." << endl;
    cout << "The 1st value in ten_numbers is at " << 
        ten_numbers << " and contains the value " <<
        ten_numbers[0] << endl;

    cout << "The 10th value in ten_numbers is at " << 
        &ten_numbers[9] << " and contains the value " <<
        ten_numbers[9] << endl;

    cout << "The difference in addresses is " <<
        (&ten_numbers[9] - &ten_numbers[0]) << endl;

    return 0;
}