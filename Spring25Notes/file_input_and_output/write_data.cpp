/*
Read some data from a text file
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    //1. create stream object without opening the file
    ofstream fout;
    double radius = 0.4;
    int integer = 10000;
    string name = "Sarah", dummy;
    //2. open a file with the objectName
    fout.open("data.txt");
    
   

    fout << "radius " << radius << "\nname " << name << "\ninteger " << integer << endl;

    fout.close();

    return 0;
}