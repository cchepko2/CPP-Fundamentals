#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{

    string file_path = "input.txt";
    fstream file; // generic filestream object; not input or output

    file.open(file_path, file.ate | file.binary | file.in);

    if(!file.is_open())
    {
        cout << "Things have gone terribly worng!" << endl;
        return -1; // Early exit from program
    }
    size_t size = file.tellg(); // Tell me the position of the file stream, and size of file in this case since we are at the end of the file
    file.seekg(0,file.beg);

    cout << "Size of file is: " << size << endl; 
    
    char * buffer = new char[size];

    if( file.read(buffer, size) )
    {
        cout << endl << endl << buffer << endl;
    }

    delete[] buffer;
    file.close();

}