/*
Author: Corin Chepko
Date: 10/1/2024
Program: kattis problem - https://open.kattis.com/problems/fizzbuzz
Algorithm Steps:
    input integers x, y, and N
    print numbers 1 through N
        if(number divisible by both) (n%x == 0 and n%y == 0)
            cout << "FixxBuzz"
        if( number divisible by x) (n%x == 0)
            cout << "Fizz"
        if( number divibile by y)   (n%y == 0)
            cout << "Buzz"
*/

#include <iostream>
#include <cassert>
//#include <string>

using namespace std;

string fizzbuzz(int i, int x, int y);
void test();

int main(int argc, char * argv[])
{
    if(argc > 1 && string(argv[1]) == "test")
    {
        test();
        return 0;
    }

    int x, y, n;

    cin >> x >> y >> n;

    for(int i=1; i<=n; i++) // for n times...
    {
        cout << fizzbuzz(i, x, y) << endl;
    }

    return 0;
}

string fizzbuzz(int i, int x, int y)
{
    if(i%x==0 && i%y == 0)
    {
        return "FizzBuzz";
    }
    else if(i%x == 0)
    {
        return "Fizz";
    }
    else if(i%y == 0)
    {
        return "Buzz";
    }
    else
    {
        return to_string(i); // converts int i to a c++ string
    }
}

void test()
{
    assert(fizzbuzz(3, 3, 6) == "Fizz");
    assert(fizzbuzz(3, 2, 3) == "Buzz");
    assert(fizzbuzz(6, 3, 6) == "FizzBuzz");
    assert(fizzbuzz(5, 3, 4) == "5");

    cerr << "All tests passed!" << endl;
}