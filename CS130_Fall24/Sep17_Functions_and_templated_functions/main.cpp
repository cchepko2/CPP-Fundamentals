#include <iostream>
#include <stdio.h>
#include <cassert>

using namespace std;

// Function prototype, tells compiler function definition is later
// in the program. Prototype only needs types, not names
// int add_two(int &a, int &b);
int add_two(int, int);
double add_two(double a, double b);

int main(void)
{
    int a=3, b=4, answer;

    answer = add_two(a,b);

    printf("%d + %d = %d\n", a, b, answer);

    float c = 14, d=5, result;
    result = add_two(c,d);

    printf("%f + %f = %f\n", c, d, result);
    

    return 0;
}

// Definining an add_two function, takes two interger parameters, returns an integer
int add_two(int a, int b)
{
    return a+b;
}

// function computes and returns sum of two integers
double add_two(double a, double b) {
    return a+b;
}