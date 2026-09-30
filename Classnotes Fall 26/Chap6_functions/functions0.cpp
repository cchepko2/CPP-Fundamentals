#include <iostream>
#include <cstdlib>

using namespace std;

// Function prototypes; tell the compiler these functions are defined later in the code.
double add_two(double &n1, double n2);
void print_essay();
char get_vowel();

int main()
{
    // Fruitless function return nothing to the 
    // main program or calling function

    printf("Hello world!\n");
    printf("Calling print_essay()...");
    
    print_essay();

    printf("The essay is printed!\n");

    double num1, num2;

    cout << "num1 lives at " << &num1 << endl;
    cout << "num2 lives at " << &num2 << endl;

    cout << "Enter two numbers: ";
    //cin >> num1 >> num2;
    num1 = 1;
    num2=3;
    printf("The sum of num1 and num2 is %f.\n", add_two(num1,num2));
    printf("num1 = %f and num2 = %f\n", num1, num2);

    get_vowel();

    return 0;
}

//Fruitful function, returns data to calling function
double add_two(double &n1, double n2)
{

    cout << "n1 lives at " << &n1 << endl;
    cout << "n2 lives at " << &n2 << endl;

    double sum;
    sum = n1 + n2;
    n1 = 999999.99999;
    return sum;
}

// Fruitless function, returns no output to calling function
void print_essay()
{
    printf("\n");

    printf("The is a very long essay...\nThe End.");


    cout << endl;
}


char get_vowel()
{
    char userInput;

    string vowels = "AaEeIiOoUu";
    bool found_vowel = false;

    do{
        cin >> userInput;

        // for ch = each vowel
        for(char ch: vowels)
        {
            if(userInput == ch)
            {
                found_vowel = true;
                return userInput;
            }

        }

    }while(!found_vowel);

    return userInput;

}