// Chap auto graded project 6


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
cout << "Enter a string for password: ";
string s;
cin >> s;

bool isValid = true;

// Only letters and digits?
for (unsigned i = 0; i < s.size(); i++)
if (!isalnum(s[i]))
isValid = false;

// Check length
if (s.size() < 8)
isValid = false;

// Count the number of digits
int count = 0;
for (unsigned i = 0; i < s.size(); i++)
if (isdigit(s[i]))
count += 1;

if (count < 2)
isValid = false;

if (isValid)
cout << "a valid password" << endl;
else
cout << "an invalid password" << endl;

return 0;
}