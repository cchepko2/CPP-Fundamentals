#include <iostream>
#include <cmath>

using namespace std;

int bin2Dec(const string& binaryString)
{
    int length = binaryString.size()-1;
    int i;
    int sum = 0;

    for(i=0; i<=length; i++)
    {
        int digit = (binaryString[i] - '0');
        sum += digit*pow(2, length-i);
    }

    return sum;
}

int main(void)
{
    string number_str;
    int converted_num;

    cout << "Enter a binaray number: ";
    cin >> number_str;

    converted_num = bin2Dec(number_str);

    cout << "The number in base10 is: " << converted_num << endl;

    return 0;
}