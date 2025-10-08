#include <iostream>
using namespace std;

void solveEquation(double a, double b, double c, double d,
  double e, double f, double& x, double& y, bool& isSolvable)
{
  double detA = a * d - b * c;

  if (detA == 0)
    isSolvable = false;
  else
  {
    x = (e * d - b * f) / detA;
    y = (a * f - e * c) / detA;
    isSolvable = true;
  }
}

int main()
{
  double a, b, c, d, e, f, x, y;
  bool isSolvable;
  cout << "Enter a, b, c, d, e, f: ";
  cin >> a >> b >> c >> d >> e >> f;

  solveEquation(a, b, c, d, e, f, x, y, isSolvable);

  if (isSolvable)
    cout << "x is " << x << " and y is " << y << endl;
  else
    cout << "The equation has no solution" << endl;

  return 0;
}