#include <iostream>


using namespace std;

int getMenuOption() {
    // A Smiple CLI-based calculator
    int option;
    cout << "Enter one of the following menu options: [1-6]\n"
        "1 -> Add\n"
        << "2 -> Subtract\n"
        << "3 -> Larger\n"
        << "4 -> Average\n"
        << "5 -> Multiply\n"
        << "6 -> Quit\n";
    cin >> option;
    return option;
}

int main(void)
{
    int day;
    cout << "Enter a day of the week: (1-7) " << endl;
    cin >> day;

    // comment out break; and see the result
    switch(day) {
        case 1: 
            cout << "Day is Sunday\n";
            ///break; //Without a break, the program moves to the next case and executes that code as well
        case 2:
            cout << "Day is Monday\n";
            break;       
        case 3:
            cout << "Day is Tuesday\n";
            break;
        case 4:
            cout << "Day is Wednesday\n";
            break;
        case 5:
            cout << "Day is Thursday\n";
            break;
        case 6:
            cout << "Day is Friday\n";
            break;
        case 7:
            cout << "Day is Saturday\n";
            break;
        default:
            cout << day << " is not a valid day!\n";
            //break; not required!
}

    cout << (getMenuOption()) << endl;

    return 0;
}


