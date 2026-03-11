#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

double average(double array[], int num_elements);

int main()
{
    string s1 = "First part ";
    string s2 = "of a message.";

    cout << s1 + s2 << endl;

    char c1[100] = "Hello ";
    char c2[] = "world.";

    cout << "Sizeof char = " << sizeof(char) << endl;

    // Memory address of first element
    cout << &c1[0] << endl;
    printf("%x\n", &c1[0]);

    cout << c1 << endl;
    printf("%x\n", c1);


    cout << (c1 + 1) << endl;
    printf("%x\n", c1+1);

    strcat(c1, c2);
    cout << c1 << endl;

    return 0;
}
