#include <iostream>


using namespace std;

int main(int argc, char* argv[])
{
    // argc is the number of arguments, always at least one which is the program name
    // argv is a pointer to character arrays that contain the string of the argument
    //if( string(argv[1]) == "test" && argc > 1) In this order, the statement will cause an error, 
    // because argv[1] may not exist, so check if it does first
    if( argc > 1 && string(argv[1]) == "test" )
    {
        cout << "Testing\n";
    }

    cout << "\n\n";

    cout << "Number of arguments to main = " << argc << endl;
    cout << "Our program name and path: " << argv[0] << endl;

    cout << "The second argument is: " << argv[1] << endl;
    

    return 0;
}