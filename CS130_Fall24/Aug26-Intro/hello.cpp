#include <iostream>
#include <bitset>


using namespace std;

int main(void)
{
    cout << "Hello!" << endl;
    int num = 16;
    bitset<8>bin_num(num);
    cout << bin_num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;
    


    return 0;
}