#include <iostream>

using namespace std;

//1. define a function that prints Hello World!
void sayHello() {
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
}

// name is the only parameter of type string
void greeting(string name) {  // returns nothing, takes a string called name in this function as a parameter
    cout << "Hello there, " << name << endl;
}

// define a function that takes two numbers and prints the sum as result
void sum(int num1, int num2) {
    long total = num1 + num2;
    num1 = 15;
    cout << num1 << " + " << num2 << " = "  << total << endl; 
}

long sum_two(int &num1, int &num2) {
    long total = num1 + num2;
    num1 = 15;
    cout << num1 << " + " << num2 << " = "  << total << endl;
    return total;
}

int main(void)
{
    sayHello();
    sayHello();

    string my_name = "Corin";
    greeting("Corin");
    greeting(my_name);

    int num1 = 2, num2 = 5;
    sum(num1,num2);
    cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

    //long total = sum_two(2, num2);  cannot pass a literal to a function by reference
    long total = sum_two(num1, num2);

    cout << "total = " << total << endl;
    cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

    return 0;
}