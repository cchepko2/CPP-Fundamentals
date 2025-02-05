 #include <iostream>
#include <sstream>

 using namespace std;

 int main()
 {
 
    // Need to make a randomish seed to generate new random numbers
    srand(time(NULL));

    // Generate random integer between 0 and 10
    int rand_num = rand()%10;
    cout << "Random number = " << rand_num << " and RAND_MAX = " 
        << RAND_MAX << endl;

    // let's say we've a string data record as: firstName MI lastName age GPA
    string mixedData = "John B Doe 20 3.9";
    // let's parse it using istringstream
    istringstream iss(mixedData);
    ostringstream oss; // like a cout but to a string

    string name;
    string throw_away;
    double gpa;
    iss >> name >> throw_away >> throw_away >> gpa >> gpa;

    cout << name << " has a " << gpa << " gpa." << endl;
    oss << name << " has a " << gpa << " gpa." << endl;

    cout << oss.str() << endl;
    
    return 0;
 }