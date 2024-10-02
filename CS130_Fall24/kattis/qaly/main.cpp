#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int num_periods;
    double quality, years;
    double qaly_total = 0;

    cin >> num_periods;

    for(int i=0;i<num_periods;i++)
    {
        cin >> quality >> years;

        qaly_total += quality*years;
    }

    cout << fixed << setprecision(3) << qaly_total << endl;

    return 0;
}