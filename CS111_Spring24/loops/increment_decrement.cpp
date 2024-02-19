#include <iostream>


using namespace std;

int main(void)
{
    int value = 0;

    cout << "Value = " << value << endl;
    cout << "Value = " << value++ << endl; // Post increment won't increment until after statement
    cout << "Value = " << value++ << endl; 
    cout << "Value = " << value << endl; // value++ changes after the statement

    value = 0;
    cout << "Value = " << value << endl;
    cout << "Value = " << value-- << endl; // Post increment won't increment until after statement
    cout << "Value = " << value-- << endl; 
    cout << "Value = " << value << endl; // value++ changes after the statement

    // value++ is same as a line that says value=value+1
    // value-- is same as a line that says value=value-1
    
    value = 0;
    cout << "\n\nValue = " << value << endl;
    cout << "Value = " << ++value << endl; // Post increment won't increment until after statement
    cout << "Value = " << ++value << endl; 
    cout << "Value = " << value << endl; // value++ changes after the statement

    return 0;
}