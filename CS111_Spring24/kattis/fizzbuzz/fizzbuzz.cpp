/*
Corin Chepko
2/28/24
Kattis Problem: Fizzbuzz https://open.kattis.com/problems/fizzbuzz
Alogorithm Steps:
    declare x, y, n, variables
    for (n times)
        print line_num starting with 1 (index)
        unless:
            line_num%x == 0 or line_num%y == 0
        then do:
            'fizz' is % x, 'buzz' if %y, 'fizzbuzz' if both
*/


#include <iostream>
#include <string>


using namespace std;

int main(void)
{
    int x, y, n;
    string ans;

    cin >> x >> y >> n;

    for(int i=1; i<=n; i++)
    {
      if(i%x == 0 && i%y==0)
      {
        ans = "FizzBuzz";
      }
      else if(i%x==0)
      {
        ans = "Fizz";
      }
      else if(i%y==0)
      {
        ans = "Buzz";
      }
      else{
        ans = to_string(i);
      }

      cout << ans << endl;

    }

    return 0;
}