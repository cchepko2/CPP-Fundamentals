#include <iostream>

using namespace std;

// addTwo - Fuitfull function...takes two int arguments, returns int
int addTwo(int num1, int num2)
{
    int answer;
    answer = num1 + num2;

    num1 = 25;

    return answer;
   //return num1+num2; 
} 

// Fruitless function, doesn't return anything, just does stuff, like print
void printCard(void)
{
    string card = "|======|\n|     |\n|     |\n|=====|";

    cout << card << endl;
}

int main(void)
{
    int a, b;

    printCard();

    cin >> a >> b;

    cout << "a = " << a << " and b = " << b << endl;

    int sum;
    sum = addTwo(a,b);
    //cout << a+b << endl;
    cout << sum << endl;

    cout << "a = " << a << " and b = " << b << endl;

    return 0;
}