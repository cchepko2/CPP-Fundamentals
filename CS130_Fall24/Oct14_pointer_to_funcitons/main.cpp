#include <iostream>

using namespace std;

double add_two(double n1, double n2)
{
    return n1+n2;
}

double sub_two(double n1, double n2)
{
    return n1-n2;
}

double add_two_p(const double *pt1, const double * pt2)
{
    // go to the address of those varibles and use those values
    //*pt1 = 30; // specified these values are constant in the prototype, so this throws an error
    return *pt1 + *pt2;
}

int main(void)
{
    double n1=16, n2=20;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    cout << "Add_two function lives at " << &add_two << endl;
    cout << "Add_two_p function lives at " << &add_two_p << endl;
    cout << "n1 lives at " << &n1 << endl;
    cout << "n2 lives at " << &n2 << endl;

    cout << "Add_two(n1, n2) = " << add_two(n1, n2) << endl;
    cout << "Add_two_pt(n1, n2) = " << add_two_p(&n1, &n2) << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    // declare a function pointer and point it at add_two
    double (*func_ptr)(double, double) = add_two;
    cout << "Add_two(n1, n2) = " << (*func_ptr)(n1, n2) << endl;

    func_ptr = sub_two;
    cout << "Sub_two(n1, n2) = " << (*func_ptr)(n1, n2) << endl;

    return 0;
}