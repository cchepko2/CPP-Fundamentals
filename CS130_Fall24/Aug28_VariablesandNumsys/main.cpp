#include <iostream>
#include <bitset>


using namespace std;

int main(void)
{
    cout << "Hello!" << endl;
    printf("Hello World\n");
    int num = 2;

    int num2 = num << 2;
    cout << "num2 = num >> 1 = " << num2 << endl;

    bitset<8>bin_num(num);
    cout << bin_num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;
    


    return 0;
}