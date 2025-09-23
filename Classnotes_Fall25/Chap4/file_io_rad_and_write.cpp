/*
Read a number
Increment it by one
Write the number to the same file
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int number;

    ifstream fin("numbers.txt");  // Open a file numbers.txt for reading
    fin >> number;
    fin.close();
    cout << "The number is: " << number << endl;

    string name;
    fin.open("name.txt");  // Open a file numbers.txt for reading
    fin >> name;
    fin.close();
    cout << "The name is: " << name << endl;
    

    number++;
    ofstream fout("numbers.txt");  // Open a file numbers.txt for reading
    fout << number;
    fout.close();



    return 0;
}