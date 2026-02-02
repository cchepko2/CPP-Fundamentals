#include <iostream>

using namespace std;

int main()
{
    int numerator = 2;
    int denominator = 3;

    cout << 1/3 << endl;
    cout << numerator/denominator << endl;

    cout << 1/3. << endl;

    cout << 4 * (1-1 / 3. + 1 / 5. - 1 / 7. + 1 / 9. - 1 / 11.)  << endl;

    double avg = (numerator + denominator)/2.0;
    cout << "Avg = " << avg << endl;

    return 0;
}