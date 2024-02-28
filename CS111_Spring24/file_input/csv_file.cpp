#include <iostream>
#include <fstream> 
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char * argv[])
{
    if(argc > 1 && string(argv[1]) == "test")
    {
        cout << "test" << endl;
        return 0;
    }

    string header_x, header_y;
    fstream file;
    double time, height;
    string time_s, height_s;

    file.open("csv_file.txt");
    if(!file.is_open())
    {
        cout << "File could not open. The world is ending!" << endl;
        return -1;
    }

    getline(file, header_x, ','); // Read until see delimiter, specified to be ',' in this case
    getline(file, header_y); // Read until see delimiter, specified to be ',' in this case

    cout << header_x << endl;
    cout << header_y << endl;

    for(int i=0;i<8;i++) // for each remaining line
    {
        getline(file, time_s, ','); // Read until see delimiter, specified to be ',' in this case
        getline(file, height_s); // Read until see delimiter, specified to be ',' in this case
        time = stof(time_s);
        height = stof(height_s);
        cout << time;
        for(int j=0;j<height-1;j++)
        {
            cout << ' ';
        }
        cout << '*' << endl;
    }

    file.close();

    return 0;
}