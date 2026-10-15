Chapter 7: Auto-Graded Programming Project 1
(Assign grades)
Write a program that reads student scores, gets the best score, and then assigns grades based on the following scheme:
    • Grade is A if score is >= best – 10
    • Grade is B if score is >= best – 20
    • Grade is C if score is >= best – 30
    • Grade is D if score is >= best – 40
    • Grade is F otherwise.
The program prompts the user to enter the total number of students, then prompts the user to enter all of the scores, and concludes by displaying the grades.
Sample Run
Enter the number of students: 4
Enter 4 scores: 40 55 70 58
Student 1 score is 40 and grade is C
Student 2 score is 55 and grade is B
Student 3 score is 70 and grade is A
Student 4 score is 58 and grade is B
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel5e.html.
Solution
answer.cpp
#include <iostream>
using namespace std;

int main()
{
  // Maximum number of students
  const int MAX_NUMBER_OF_STUDENTS = 100;
  int scores[MAX_NUMBER_OF_STUDENTS]; // Array scores
  int best = 0; // The best score
  char grade; // The grade

  int numberOfScores;
  cout << "Enter the number of students: ";
  cin >> numberOfScores;

  cout << "Enter " << numberOfScores << " scores: ";

  // Read scores and find the best score
  for (int i = 0; i < numberOfScores; i++)
  {
    cin >> scores[i];
    if (scores[i] > best)
      best = scores[i];
  }

  // Assign and display grades
  for (int i = 0; i < numberOfScores; i++)
  {
    if (scores[i] >= best - 10)
      grade = 'A';
    else if (scores[i] >= best - 20)
      grade = 'B';
    else if (scores[i] >= best - 30)
      grade = 'C';
    else if (scores[i] >= best - 40)
      grade = 'D';
    else
      grade = 'F';

    cout << "Student " << (i + 1) << " score is " << scores[i] <<
      " and grade is " << grade << "\n";
  }

  return 0;
}

Chapter 7: Auto-Graded Programming Project 2
(Count occurrence of numbers)
Write a program that reads at most 100 integers between 1 and 100 and counts the occurrence of each number. Assume the input ends with 0.
Sample Run
Enter the numbers between 1 and 100 ending with 0: 
2 5 6 5 4 3 23 43 2 0
2 occurs 2 times
3 occurs 1 time
4 occurs 1 time
5 occurs 2 times
6 occurs 1 time
23 occurs 1 time
43 occurs 1 time
Note: As shown in the Sample Run, the plural times is used if the occurrence count is more than 1.
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel5e.html.
Solution
answer.cpp
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

Chapter 7: Auto-Graded Programming Project 3
(Print distinct numbers)
Write a program that reads in 10 numbers and displays distinct numbers in the order of input and separated by exactly one space (i.e., if a number appears multiple times, it is displayed only once). (Suggestion: Read a number and store it to an array if it is new. If the number is already in the array, discard it. After the input, the array contains the distinct numbers.)
Sample Run
Enter ten integers: 1 2 3 2 1 6 3 4 5 2
The number of distinct numbers is 6
The distinct numbers are: 1 2 3 6 4 5 
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel5e.html.
Solution
answer.cpp
#include <iostream>
using namespace std;

int main()
{
  int numbers[10]; // Store distinct values
  int size = 0; // Indicate how many distict values are in the array numbers

  cout << "Enter ten integers: ";
  for (int i = 0; i < 10; i++) {
    // Read and store numbers in an array if it is new
    int value;
    cin >> value;

    bool isInArray = false;
    for (int j = 0; j < size; j++)
    {
      if (numbers[j] == value) 
      {
        isInArray = true;
        break;
      }
    }

    if (!isInArray) 
    {
      numbers[size] = value;
      size++;
    }
  }

  cout << "The number of distinct numbers is " << size << endl;
  cout << "The distinct numbers are: ";
  for (int i = 0; i < size; i++)
    cout << numbers[i] << " ";

  return 0;
}

Chapter 7: Auto-Graded Programming Project 4
(Statistics: compute deviation)
Given a list of numbers , , …,  one can compute the mean and standard deviation using the following formulas:


To compute the standard deviation with this formula, you have first to store the individual numbers using an array, then you should compute the mean and eventually the standard deviation.
Your program should contain the following functions:
double mean(const double x[], int size)
// Compute the mean of an array of double values

double deviation(const double x[], int size)
// Compute the deviation of double values 
Write a test program that prompts the user to enter a list of 10 numbers in one line and displays the mean and standard deviation.
Sample Run
Enter numbers: 1.9 2.5 3.7 2 1 6 3 4 5 2 
The mean is 3.11
The standard deviation is 1.55738
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel5e.html.
Solution
answer.cpp
#include <iostream>
#include <cmath>
using namespace std;

/** Function for computing mean of an array of double values */
double mean(const double x[], int size)
{
  double sum = 0;

  for (int i = 0; i < size; i++)
    sum += x[i];

  return sum * 1.0 / size;
}

/** Function for computing mean of an array of int values */
double mean(const int x[], int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
    sum += x[i];

  return sum / size;
}

/** Function for computing deviation of double values */
double deviation(const double x[], int size)
{
  double mean1 = mean(x, size);
  double squareSum = 0;

  for (int i = 0; i < size; i++)
  {
    squareSum += pow(x[i] - mean1, 2);
  }

  return sqrt(squareSum / (size - 1));
}

/** Function for computing deviation of int values */
double deviation(const int x[], int size)
{
  double mean1 = mean(x, size);
  double squareSum = 0;

  for (int i = 0; i < size; i++)
  {
    squareSum += pow(x[i] - mean1, 2);
  }

  return sqrt(squareSum / (size - 1));
}

/** Function for printing array */
void printArray(const double x[], int size)
{
  for (int i = 0; i < size; i++)
    cout << x[i] << " ";
  cout << endl;
}

int main()
{
  const int SIZE = 10;
  // Declare and create an array for 10 numbers
  double numbers[SIZE];

  cout << "Enter ten numbers: ";
  for (int i = 0; i < SIZE; i++)
  {
    cin >> numbers[i];
  }

  cout << "The mean is " << mean(numbers, 10) << endl;
  cout << "The standard deviation is " << deviation(numbers, 10) << endl;

  return 0;
}

Chapter 7: Auto-Graded Programming Project 5
(Sorted?)
Write the following function that returns true if the list is already sorted in increasing order:
bool isSorted(const int list[], int size)
Write a test program that prompts the user to enter a list and displays whether the list is sorted or not. Assume the maximum list size is 80.
Sample Run 1
Enter the size of the list: 8
Enter the list: 1 1 5 10 11 16 61 9 
The list is already sorted
Sample Run 2
Enter the size of the list: 8
Enter the list: 10 1 5 16 61 9 11 1
The list is not sorted
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel5e.html.
Solution
answer.cpp
#include <iostream>
using namespace std;

bool isSorted(const int list[], int size)
{
  for (int i = 0; i < size - 1; i++) 
    if (list[i] > list[i + 1]) 
      return false;

  return true;
}

int main()
{
  const int MAX_SIZE = 80;

  // Enter list size
  cout << "Enter the size of the list: ";
  int size;
  cin >> size;
  
  int list[MAX_SIZE];    
  cout << "Enter the list: ";
  for (int i = 0; i < size; i++) 
    cin >> list[i];

  if (isSorted(list, size))    
    cout << "The list is already sorted" << endl;
  else
    cout << "The list is not sorted" << endl;

  return 0;
}