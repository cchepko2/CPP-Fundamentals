#include <iostream>
#include <stdio.h>
#include <cassert>

using namespace std;

// Defining a function, take no parameters and returns nothing
void greeting(void)
{
    cout << "Hello!" << endl;
}

// Defining a function, take 1 parameter, a string, and returns nothing
void greeting2(string &fname)
{
    fname = "Susan";    // Changing the varible to "Susan", will affect the rest of the 
            // program when passed by reference (& in front of variable)
    cout << "Hello " << fname << '!' << endl;
}

// Definining an add_two function, takes two interger parameters, returns an integer
int add_two(int &a, int &b)
{
    return a+b;
}

void test(void)
{
    int a=4,b=7;

    assert( true == true);
    assert( add_two(a, b) == 11 );

    cerr << "All tests passed!" << endl;
}

string input_name()
{
    string name;

    cout << "Enter in your name...it needs to be exactly my name!" << endl;
    cin >> name;
    if( name == "Corin" )
    {
        return "You win";
    }
    
    return "You lose";
}

int main(void)
{
    string name;
    int answer, a=3, b=4;

    test();

    greeting();

    cout << "Enter your name please: ";
    //cin >> name;
    name = input_name();
    cout << name << endl;

    greeting2(name);

    cout << name << endl;

    answer = add_two(a,b);

    printf("%d + %d = %d", a, b, answer);
    

    return 0;
}