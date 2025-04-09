/*
Read some data from a text file
*/

#include <iostrea>
#include <fstream>

using namespace std;

int main(void)
{
    //1. create stream object without opening the file
    ifstream fin;
    //2. open a file with the objectName
    fin.open("data.txt");


    return 0;
}