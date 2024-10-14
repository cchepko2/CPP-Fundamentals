#include <iostream>

//using namespace std; // Brings all std 'things' into current scope

namespace my_stuff
{
    std::string fname, lname;
    int number = 16;
}

int main(void)
{
    std::cout << "Hello World!" << std::endl;

    std::cout << "Please enter your name" << std::endl;
    std::cin >> my_stuff::fname >> my_stuff::lname;

    printf("Nice to me you, %s %s!\n", my_stuff::fname.c_str(), my_stuff::lname.c_str());

    using namespace my_stuff; // Bring everything in my_stuff into current scope so I don't
                                // have to type my_stuff:: all the time

    printf("Nice to me you, %s %s!\n", fname.c_str(), lname.c_str());
    std::cout << "My_stuff number = " << number << std::endl;

    using namespace std;
    
    printf("Nice to me you, %s %s!\n", fname.c_str(), lname.c_str());
    cout << "My_stuff number = " << number << endl;

    return 0;
}