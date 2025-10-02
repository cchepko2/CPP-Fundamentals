#include <iostream>

using namespace std;

double add_two(double &n1, double &n2)
{
    n1 = 10;
    return n1+n2;
}


int main()
{
    double n1 = 5, n2 = 3;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    cout << "add_two(5, 3) = " << add_two(n1, n2) << endl;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    int userScore = 9999999;
    int &scoreRef = userScore;

    scoreRef = -10000000;

    cout << userScore << endl << scoreRef << endl;

    return 0;
}