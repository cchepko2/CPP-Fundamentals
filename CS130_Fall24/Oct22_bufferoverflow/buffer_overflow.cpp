// buffer overflow example 2
// TODO: Compile and run the program using given Makefile
// enter whatever username and about 20 As or more for passoword
// goal is to display the social security without using the hidden password

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    bool valid = false;
    char password[10];
    char username[10];
	
    cout << "Enter username: ";
    cin >> username;
	cout << "Enter password: ";
	cin >> password;
	//strcpy(passBuffer, password);

    printf("%x\n", &username[0]);
    printf("%x\n", &password[0]);

	if (string(username) == "backdoor" and strcmp(password, "123456") == 0)
		valid = true;
	
    //cout << valid << endl;
    if(valid) {
        cout << "You have now access to top secret part of the program!" << endl;
        cout << "Your SSN is 123-45-5678\n";
    }
    else
        cout << "Invalid username or password!" << endl;
   
   return 0;
}