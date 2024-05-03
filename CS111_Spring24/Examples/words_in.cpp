#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;

int main(void)
{
    ifstream fin;
    string line;
    vector<string> words;
    char word[100];
    char (*words_arr)[100] = new char[235886][100];

    cout << "Hello world!" << endl;

    fin.open("dict-words.txt");

    if(!fin.is_open())
    {
        cout << "Unable to load dictionary!" << endl;
        return -1;
    }
    
    int lines=0;
    while( getline(fin, line) )
    {
        strncpy(words_arr[lines],line.c_str(), 99);
        words.push_back(line);
        lines++;
        //cout << line << endl;
    }

    srand(time(NULL));

    int random_word = rand()%lines;

    cout << words[random_word] << endl;
    cout << words_arr[random_word] << endl;


    fin.close();

    ofstream fout;
    fout.open("out.txt",ios_base::app);

    return 0;
}
