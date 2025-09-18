/*
File IO and iomanip notes
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    //ofstream fout;

    ofstream fout("output-filename.txt");
    //fout.open("formatted.txt");
    
    fout << setw(50) << setfill('=') << " " << setfill(' ') << endl;

    fout << fixed << setprecision(2); 
    fout << setw(25) << left << "Item" << setw(25) << right << "Price" << endl;
    fout << setw(50) << setfill('=') << " " << setfill(' ') << endl;
    fout << setw(25) << left << "Apple" << setw(25) << right << 5.99 << endl;
    fout << setw(25) << left << "Carrots" << setw(25) << right << 2.55 << endl;
    fout << setw(50) << setfill('*') << " " << setfill(' ') << endl;

    cout << setw(50) << setfill('=') << " " << setfill(' ') << endl;

    cout << fixed << setprecision(2); 

    cout << setw(25) << left << "Item" << setw(25) << right << "Price" << endl;
    cout << setw(50) << setfill('=') << " " << setfill(' ') << endl;
    cout << setw(25) << left << "ApplejBsflslajf;ljhl;jg" << setw(25) << right << 5.99 << endl;
    cout << setw(25) << left << "Carrots" << setw(25) << right << 2.55 << endl;
    cout << setw(50) << setfill('*') << " " << setfill(' ') << endl;

    int x;
    cout << "x\tlog(x)\tlog2(x)\tlog10(x)\n";
    cout << setw(35) << setfill('=') << "\n";
    cout << fixed << setprecision(4);
    x = 1; // while loop initialization
    while(x <= 10) {
        // natural log base e, base 2 and base 10
        cout << x << '\t' << log(x) << '\t' << log2(x) << '\t' << log10(x) << endl;
        x += 1; // update loop variable
    }
    cout << setw(35) << setfill(' ') << left << 3.14159 << endl;
    cout << setw(35) << setfill(' ') << 3.14159 << endl;

    fout.close();


    ofstream output;

   // Create a file
    output.open("numbers.txt");
  
    // Write numbers
    output << 95 << " " << 56 << " " << 34;
  
    // Close file
    output.close();
  
    cout << "Done" << endl;




    return 0;
}