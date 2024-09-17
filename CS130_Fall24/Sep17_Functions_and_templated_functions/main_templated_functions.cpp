#include <iostream>
#include <stdio.h>
#include <cassert>

using namespace std;

int number = 7;
const double PI = 3.14159;

// Function prototype, tells compiler function definition is later
// in the program. Prototype only needs types, not names
// templated add_two function
template <class T1>
T1 add_two(T1 a, T1 b);

template <class T1>
T1 sub_two(T1 a, T1 b);

template <class T1>
T1 mult_two(T1 a, T1 b);

template<class T1, class T2, class T3>
T1 add(T2 para1, T3 para2);

void test(void);

int main(void)
{
    test();

    int a=3, b=4, answer, number = 3;

    //answer = add_two<int, int>(a,b);
    answer = add_two<int>(a, b);

    printf("%d + %d = %d\n", a, b, answer);

    float c = 1.5, d=5, result;
    result = add_two<float>(c,d);

    printf("%f + %f = %f\n", c, d, result);
    
    result = add<float, int, float>(a,d);
    printf("%f + %f = %f\n", c, d, result);

    result = mult_two<float>(b,c);
    printf("%d * %f = %f\n", b, c, result);

    printf("number = %i\n", number);

    return 0;
}

// Defining templated function, can add any type
template <class T1>
T1 add_two(T1 a, T1 b) 
{
    printf("number = %i\n", number);
    return a+b;
}

template <class T1>
T1 sub_two(T1 a, T1 b) 
{
    return a-b;
}

template <class T1>
T1 mult_two(T1 a, T1 b) 
{
    return a*b;
}

// function adds two numbers and returns the sum
template<class T1, class T2, class T3>
T1 add(T2 para1, T3 para2) {
  return para1 + para2;
}

void test(void)
{
    assert( add_two<int>(3,4) == 7);

    cerr << "All test passed!" << endl;
}
