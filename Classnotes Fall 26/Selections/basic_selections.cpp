/*
Corin Chepko
9/9/26
Besic Selections
*/

/*
Corin Chepko
9/7/26
Chap 2 notes, input
*/

#include <iostream>
#include <iomanip>  // for fixed and setprecision()

using namespace std;

int main()
{
    char yes_no = '\'';
    string and_or;
    int num1 = 3, num2 = 4;
    bool go = true;
    double floating_num = 3.2;

    if(floating_num == 3.2)
    {
        cout << fixed << setprecision(16) << "floating_num = " << floating_num << endl;
        cout << "floating_num equals exactly 3.2" << endl;
    }

    if(go)
    // if(!!go) would be the same
    // if(!go) is the same as if(go == false)
    {

        cout << "Want to do an or conditional or and 'and' conditional,\nEnter type 'and', or 'or'" << endl;
        cin >> and_or;

        if(and_or == "and")  // Start the and conditionals
        {
            if(num1 == 3 and num2 == 4) 
            {
                cout << "num1 = 3 and num2 = 4" << endl;
            }
            else
            {
                cout << "num1 not == 3 or num2 not == 4" << endl;
            }
        }       // End of 'and' conditional
        else if(and_or == "or")
        {
            cout << "Enter 'N' for error. " << endl;

            cin >> yes_no;

            // for an 'or' statement, use 'or' or ||
            if(yes_no == 'N' || yes_no == 'n')
            {
                cout << "You entered a 'N' " << endl;
                return 123;
            }

            cout << "you did not enter 'N'" << endl;
        } // end of 'or' conditionals
        else
        {
            cout << "Didn't type \"and\" or \"or\" " << endl;
        }
    } // end if(go)
    

    return 0;
}