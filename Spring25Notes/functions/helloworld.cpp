#include <iostream>

using namespace std;

// Fruitless function, does not return data to calling function
void helloworld(void)
{
    cout << "Hello World!" << endl;
}

void print_a_plus_b(double a, double b)
{
   cout << "a + b = " << a+b << endl; 
}

double print_a_plus_b_and_return(double a, double b)
{
   cout << "a + b = " << a+b << endl;

   return a+b;  // Return this data to calling function
}



int main()
{
    helloworld();  // Calling the function helloworld, main() is the caller, helloworld() is the callee
    print_a_plus_b(11.3, 0.7);

    double num1=0.5;
    double sum = print_a_plus_b_and_return(num1, 0.3);

    cout << "The return of print_a_plus_b_and_return(num1, 0.3) = " << sum << endl;

    return 0;
}