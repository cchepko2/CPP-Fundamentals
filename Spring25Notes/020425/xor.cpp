#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num = 4;
    int num2 = 0b110;

    int result = 4^2;

    cout << "4^2 = " << result << endl;
    cout << "0b110 = " << num2 << endl;
    cout << "num2 = " << hex << num2 << " in hex." << endl;

    double num3 = 5.000000000000001;
    double ans = 5.0;

    cout << (num3==ans) << endl;


    return 0;

}