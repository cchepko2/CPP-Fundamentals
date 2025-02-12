#include <iostream>  // For cout, cin, printf

using namespace std;

int main(void)
{
    string name;
    string last_lastname = " More stuff";

    cout << "Enter your name: ";
    getline(cin, name);

    printf("First character = %c\nTenth characer = %c\n", name[0], name[9]);

    cout << "a=" << int('a') << "b=" << int('b') << endl << ('a' < 'b') << endl;
    cout << ("apple" < "bannana") << endl;

    cout << "\"102\" < \"2\" = " << boolalpha << ("102" < "2") << endl; 
    cout << "102 < 2 = " << boolalpha << (102 < 2) << endl;

    cout << "Adding strings together..." << endl;
    cout << name + last_lastname << endl;

    return 0;
}