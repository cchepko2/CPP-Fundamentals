#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    //futureinvestmentValue = investmentAmount*(1+interestRate)^(12*numYears)
    double futureInvestmentVal, investmentAmount, interestRate, numYears;

    cout << "Enter investment amount: ";
    cin >> investmentAmount;
    
    cout << "Enter annual interest rate in percentage: ";
    cin >> interestRate;
    
    cout << "Enter number of years: ";
    cin >> numYears;

    futureInvestmentVal = investmentAmount*pow((1+interestRate/1200), (12*numYears));
    cout << "Accumulated value is $" << futureInvestmentVal << endl;
    return 0;
}