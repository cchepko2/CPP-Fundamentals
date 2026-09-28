#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n;
   
    cin >> n;
    
    int i, j, k;
    for (int i = 1; i <= n; i++)
    {
    for (int j = 1; j <= (n - i); j++)
    {
        cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout << i;
    }
    cout << "\n";
    }


    return 0;
}