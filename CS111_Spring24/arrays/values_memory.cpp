#include <iostream>

using namespace std;

int main(void)
{
    char name[] = "Corin";
    char *name2 = name;
    int num1 = 1;
    //char letter = 'C';
    float letter = 67;
    double big_num = 55834.24;

    //cout << "name at " << &name[0] << endl;
    cout << name << endl;
    name[2] = 'V';
    cout << name2 << endl;
    printf("name at %x\n", name);
    cout << "num1 at " << &num1 << endl;
    cout << "letter at " << &letter << endl;
    cout << "big_num at " << &big_num << endl;

    cout << "double is "<< sizeof(double)<<endl;
    cout << "float is "<< sizeof(float)<<endl;
    cout << "int is "<< sizeof(int)<<endl;

    return 0;
}