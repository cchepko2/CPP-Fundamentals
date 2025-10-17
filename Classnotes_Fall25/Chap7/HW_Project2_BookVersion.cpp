#include <iostream>
using namespace std;

int main()
{
  int counts[100] = {0}; // counts[0] is to count the number of occurrence of number 1
                         // counts[99] is to count the number of occurrence of number 100

  cout << "Enter the numbers between 1 and 100 ending with 0: ";

  // Read all numbers
  int number; // number read from a file
  cin >> number;
  while (number != 0)
  {
    counts[number - 1]++;
    cin >> number;
     }

  // Display result
  for (int i = 0; i < 100; i++)
  {
    if (counts[i] > 0)
      cout << (i + 1) << " occurs " << counts[i]
           << (counts[i] == 1 ? " time" : " times") << endl;
  }

  return 0;
}