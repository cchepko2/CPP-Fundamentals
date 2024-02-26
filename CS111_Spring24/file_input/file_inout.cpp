#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    string filename, stuff;
    string name = "";
    float grade=0, temp;
    int count = 5;

    cout << "Enter a file name to open: " << endl;
    cin >> filename;

    fstream fin;
    fstream fout("output.txt"); // By default open a file in text mode and clears contents of file

    fin.open(filename);
    cout << "Made it here in the program" << endl;

    while(!fin.eof())
    {
        fin >> name;
        for(int i=0; i<count; i++)
        {
            fin >> temp;
            grade += temp;
        }
        grade /= count;  // this computes the average

        cout << name << " has an average score of " 
            << grade << endl;
        fout << name << " has an average score of " 
            << grade << endl;

    }

    fin.seekg(0, fin.beg);  // Seeks the beginning of the file, so we can start reading all over again
    
    getline(fin, stuff);
    cout << "things " << stuff << endl;
    getline(fin, stuff);
    cout << stuff << endl;

    fin.close();
    fout.close();

    return 0;
}