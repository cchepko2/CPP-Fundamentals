#include <iostream>

using namespace std;

bool check_membership(int num, int ten_num[]);

int main(void)
{
    int num;
    int ten_num[10];

    cout << "Enter ten numbers: ";
    cin >> ten_num[0];
    for(int i=1;i<10;i++)
    {
        ten_num[i] = ten_num[i-1];
    }
    int j=1;
    for(int i=1;i<10;i++)
    {
        cin >> num;
        if( check_membership(num, ten_num) == false )
        {
            ten_num[j] = num;
            j++;
        }
    }

    cout << "The distinct numbers are: ";
    cout << ten_num[0];
    for(int i=1;i<j;i++)
    {
        cout << ' ' << ten_num[i];
    }

    return 0;
}

bool check_membership(int num, int ten_num[])
{
    for(int i=0;i<10;i++)
    {
        if(num == ten_num[i])
        {
            return true;
        }
    }
    return false;
}