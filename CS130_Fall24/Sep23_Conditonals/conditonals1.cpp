#include <iostream>

void check_pos_neg(int number);
void check_pos_neg_noelse(int number);
void check_pos_neg_zero(int number);
void check_pos_neg_odd_even(int number);

using namespace std;

int main(void)
{
    int num = 2;

    cout << boolalpha << (num == 2) << endl;

    cout << boolalpha << (num < 1) << endl;

    cout << "Enter a number: " << endl;
    cin >> num;

    cout << "Code before if..." << endl;
    if(num > 1)
    {
        cout << "code inside if statement..." << endl;
    }
    cout << "Code after if." << endl;

    check_pos_neg(num);
    
    check_pos_neg_noelse(num);

    check_pos_neg_zero(num);

    check_pos_neg_odd_even(num);

    return 0;
}

void check_pos_neg(int number)
{
    if(number > 0)
    {
        cout << "Number is positive" << endl;
    }
    else
    {
        cout << "Number is negative" << endl;
    }
}

void check_pos_neg_noelse(int number)
{
    string answer = "negative";
    if(number > 0)
    {
        cout << "Number is " << answer << endl;
        return;  // Cannot do early return on void functions
    }

    cout << "Number is " << answer << endl;
}

void check_pos_neg_zero(int number)
{
    if(number > 0) // if expression is one line, {} aren't necessary
        cout << "Number is positive." << endl;
    else if( number < 0)
        cout << "Number is negative." << endl;
    else {
        cout << "Number is zero." << endl;
    }
}

void check_pos_neg_odd_even(int number)
{
    if( (number > 0) && (number%2 == 0) )
    {
        cout << "I know \"and\"s work!" << endl;
        cout << "Number is even and positive" << endl;
    }
    if(number > 0) 
    {
        if(number %2 == 0)
        {
            cout << "Number is positive and even." << endl;
        }
        else
        {
            cout << "Number is positive and odd." << endl;
        }
    }
    else if( number < 0)
        if(number %2 == 1)
        {
            cout << "Number is negative and even." << endl;
        }
        else
        {
            cout << "Number is negative and odd." << endl;
        }
    else {
        cout << "Number is zero." << endl;
    }
}