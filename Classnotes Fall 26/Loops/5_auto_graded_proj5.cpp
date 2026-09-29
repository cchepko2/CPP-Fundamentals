// Chap 5 Auto-graded project 5

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  cout << "Enter a string: ";
  string s;
  getline(cin, s);

  int countVowels = 0;
  int countConsonants = 0;
  for (int i = 0; i < s.size(); i++)
  {
    char temp = toupper(s[i]);
    if (temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U')
      countVowels++;
    else if (isalpha(temp))
      countConsonants++;
  }

  cout << "The number of vowels is " << countVowels << endl;
  cout << "The number of consonants is " << countConsonants << endl;

  return 0;
}