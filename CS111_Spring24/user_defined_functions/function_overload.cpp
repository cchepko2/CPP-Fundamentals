#include <iostream>


using namespace std;

float mult_two(float, float);
int mult_two(int, int);
string mult_two(string, string);

template <class T1, class T2>
T2 addtwo(T1, T2);

int rounded(double r) {return int(r+0.5);}

int main(void)
{
    float ans, n1=2.25, n2=4.5;
    int n1_int=2, n2_int=5;
    string n1_str="2", n2_str="5"; 

    ans = mult_two(n1, n2);
    cout << "mult_two with " << n1 << " and " << n2 << " as parameters = " << ans << endl;

    ans = mult_two(n1_int, n2_int);
    cout << "mult_two with " << n1_int << " and " << n2_int << " as parameters = " << ans << endl;

    string ans2 = mult_two(n1_str, n2_str);
    cout << "mult_two with " << n1_str << " and " << n2_str << " as parameters = " << ans2 << endl;

    ans = addtwo<float, float>(n1, n2);
    cout << "add_two with " << n1 << " and " << n2 << " as parameters = " << ans << endl;

    ans = addtwo<int, int>(n1_int, n2_int);
    cout << "add_two with " << n1_int << " and " << n2_int << " as parameters = " << ans << endl;

    ans2 = addtwo<string, string>(n1_str, n2_str);
    cout << "add_two with " << n1_str << " and " << n2_str << " as parameters = " << ans2 << endl;

    ans = addtwo<int, float>(n1_int, n2);
    cout << "add_two with " << n1_int << " and " << n2 << " as parameters = " << ans << endl;


    return 0;
}

float mult_two(float n1, float n2)
{
    return n1*n2;
}

int mult_two(int n1, int n2)
{
    return n1*n2;
}

string mult_two(string n1, string n2)
{
    return n1+n2;
}

template <class T1, class T2>
T2 addtwo(T1 n1, T2 n2)
{
    return n1+n2;
}