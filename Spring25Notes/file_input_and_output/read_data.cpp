/*
Read some data from a text file
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    //1. create stream object without opening the file
    ifstream fin;
    double radius;
    int integer;
    string name, dummy;
    //2. open a file with the objectName
    fin.open("data.txt");
    
    fin >> dummy >> radius >> dummy >> name >> dummy >> integer;

    cout << "radius = " << radius << ", name = " << name << ", integer = " << integer << endl;

    fin.close();

    return 0;
}