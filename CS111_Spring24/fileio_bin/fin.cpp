#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ifstream fin;

    fin.open("out.bin", ios_base::binary);

    int number;
    double doub;

    fin.read(reinterpret_cast<char*>(&number), sizeof(number));
    cout << "Number is " << number << endl;

    fin.read(reinterpret_cast<char*>(&doub), sizeof(double));
    cout << "Doub is " << doub << endl;

    fin.close();

    return 0;
}