/*
Print the prices of fruit in a table


=======================================
              Fruit Prices
=======================================
Peach                             $0.99
Tomatos                           $0.50
Avacados                          $5.00
=======================================

*/




#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    string fruit1 = "Peach";
    string fruit2 = "Tomato";
    string fruit3 = "Avacado";

    double p_price = 0.99;
    double t_price = 0.50;
    double a_price = 5.00;

    // Print an '=' character, fill the other 39 spaces with 
    // '=' characters as well
    cout << setw(40) << setfill('=') << '=' << endl;
    string title = "Fruit Prices";
    cout << setw(40) << setfill(' ') << title.append((40-title.size())/2, ' ') << endl;
    cout << setw(40) << setfill('=') << '=' << endl;

    // set fill back to spaces
    cout << setfill(' ');

    cout << left << setw(20) << fruit1;
    cout << right << setw(20) << p_price << endl;
    cout << left << setw(20) << fruit2;
    cout << right << setw(20) << t_price << endl;
    cout << left << setw(20) << fruit3;
    cout << right << setw(20) << a_price << endl;

    cout << setw(40) << setfill('=') << '=' << endl;

    ofstream fout;
    fout.open("FruitPrices.txt");
    cout << fout.is_open() << endl;

    fout << setw(40) << setfill('=') << '=' << endl;
    fout << setw(40) << setfill(' ') << title.append((40-title.size())/2, ' ') << endl;
    fout << setw(40) << setfill('=') << '=' << endl;

    // set fill back to spaces
    fout << setfill(' ');

    fout << left << setw(20) << fruit1;
    fout << right << setw(20) << p_price << endl;
    fout << left << setw(20) << fruit2;
    fout << right << setw(20) << t_price << endl;
    fout << left << setw(20) << fruit3;
    fout << right << setw(20) << a_price << endl;

    fout << setw(40) << setfill('=') << '=' << endl;

    fout.close();


    return 0;
}