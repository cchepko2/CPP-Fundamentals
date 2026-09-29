// Chap 5 auto graded project 4

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  int numberOfYears;
  double loanAmount;

  // Enter loan amount
  cout << "Enter loan amount, for example 120000.95: ";
  cin >> loanAmount;

  // Enter number of years
  cout << "Enter number of years as an integer, \nfor example 5: ";
  cin >> numberOfYears;

  // Display the header
  cout << setw(13) << "Interest Rate" << setw(20) << "Monthly Payment" <<
    setw(20) << "Total Payment" << endl;

  double monthlyInterestRate;
  double monthlyPayment;
  double totalPayment;

  for (double annualInterestRate = 5.0; annualInterestRate <= 8.0; annualInterestRate += 1.0 / 8)
  {
    // Obtain monthly interest rate
    monthlyInterestRate = annualInterestRate / 1200;

    // Compute mortgage
    monthlyPayment = loanAmount * monthlyInterestRate / (1 - (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
    totalPayment = monthlyPayment * numberOfYears * 12;

    // Display results
    cout << setw(12) << fixed << showpoint << setprecision(3) << annualInterestRate << "%";
    cout << setw(20) << fixed << showpoint << setprecision(2) << monthlyPayment;
    cout << setw(20) << showpoint << setprecision(2) << totalPayment << endl;
  }

  return 0;
}