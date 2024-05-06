#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main(void)
{
    string word = "Cats";
    string space = " ";
    int spaces = ((int)(31-word.size())/2);

    cout << setw(spaces) << left << word << "More Stuff" << endl;

    ostringstream guessed_print;
    guessed_print << "___" << "a" << "_" << endl;

    string print_thing = guessed_print.str();

    cout << print_thing << endl;

}