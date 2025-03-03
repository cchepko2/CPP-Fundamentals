#include <iostream>

using namespace std;


// If my functions are defined later, must include function prototype definitions
// at the beginning of the file.
double add_two(double a, double b);
string add_two(string a, string b);

int main(void)
{
    string fname = "Corin", lname = " Chepko";
    double a = 1, b = 5.3;

    cout << "The sum of " << fname << " and " 
        << lname << " = " << add_two(fname, lname) << endl;

    cout << "The sum of " << a << " and " 
        << b << " = " << add_two(a, b) << endl; 

    return 0;
}

// If we define two functions with the same name and number of parameters,
// we can use different variable types. The compiler will automatically determine
// which function to use based on type
double add_two(double a, double b)
{
    return a+b;
}
string add_two(string a, string b)
{
    static string pre_value = a;
    return a+b;
}