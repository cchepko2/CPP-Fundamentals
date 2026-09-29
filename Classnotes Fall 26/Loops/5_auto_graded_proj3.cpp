// Chap 5 auto graded proj 3

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Prompt the user to enter the number of students
  cout << "Enter the number of students: ";
  int numberOfStudents;
  cin >> numberOfStudents;

  double score1 = -1;
  double score2 = -2;
  string name1;
  string name2;

  for (int i = 0; i < numberOfStudents; i++)
  {
    cout << "Enter a student name: ";
    string name;
    cin >> name;

    cout << "Enter a student score: ";
    double score;
    cin >> score;

    if (score > score1)
    {
      score2 = score1;
      score1 = score;
      name2 = name1;
      name1 = name;
    }
    else if (score > score2)
    {
      score2 = score;
      name2 = name;
    }
  }

  cout << "Student " << name1 << " has the highest score " << score1 << endl;
  cout << "Student " << name2 << " has the second highest score " << score2 << endl;

  return 0;
}