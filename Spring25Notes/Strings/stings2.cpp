#include <iostream>  // For cout, cin, printf
#include <iomanip> // For setw(), setprecision, fixed, setfill
#include <fstream> // For file IO

using namespace std;

int main(void)
{
    string name;
    string line;

    cout << "Enter a name: ";
    cin >> name;

    cout << "Enter a line of text: ";
    // In order to use getline() after a cin, must do a cin.ignore() 
    // to toss the newline character from the stream
    cin.ignore(1000, '\n');
    getline(cin, line);

    string greeting = "Hello " + name;
    double gpa = 3.3;

    cout << setfill('=') << setw(30) << left << greeting << setw(5) << right << gpa << endl;
    
    // Output line variable into space of 100 characters right aligned
    cout << setfill(' ') << setw(100) << line << endl;

    // Create output file stream
    ofstream fout;
    fout.open("text.txt");
    fout << "Hello WOrld!" << endl;
    fout.close();

    fstream fin("text.txt");
    //fin >> line;
    getline(fin, line);
    cout << line << endl;
    fin.close();


    return 0;
}