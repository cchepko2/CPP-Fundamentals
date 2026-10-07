// Variable scope

#include <iostream>

using namespace std;

int main()
{
    int number = 12;

    int &number_address = number;

    cout << number << " " << number_address << endl;

    number++;
    cout << number << " " << number_address << endl;
    
    number_address = 14;
    cout << number << " " << number_address << endl;

    cout << "The address of number and number_address is "
        << &number << endl << &number_address << endl;
    return 0;
}