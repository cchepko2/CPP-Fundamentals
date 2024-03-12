#include <iostream>

using namespace std;

int main(void)
{
    char name[] = "Corin";
    int num1 = 1;
    //char letter = 'C';
    float letter = 67;
    double big_num = 55834.24;

    cout << "name at " << &name[0] << endl;
    cout << "num1 at " << &num1 << endl;
    cout << "letter at " << &letter << endl;
    cout << "big_num at " << &big_num << endl;

    cout << "double is "<< sizeof(double)<<endl;
    cout << "float is "<< sizeof(float)<<endl;
    cout << "int is "<< sizeof(int)<<endl;

    cout << "Happy birthday Corin!" << endl;

    return 0;
}