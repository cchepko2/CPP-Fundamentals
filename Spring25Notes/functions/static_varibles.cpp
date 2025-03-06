#include <iostream>

using namespace std;

int some_algorithm(int);
void social_butterfly(string new_name); 
double avg(double new_val);
// Take a name, and adds it to it's list of names

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    //int answer = some_algorithm(n);

    string name;

    for(int i=0;i<5;i++)
    {
        /*cout << "Enter a name: " << endl;
        cin >> name;
        social_butterfly(name);*/
        double number;
        cout << "Enter a number: ";
        cin >> number;
        avg(number);
    }

    return 0;
}

int some_algorithm(int n)
{
    int i = n;
    while(i != 1)
    {
        if(i%2 == 0)
        {
            i = i/2; 
        }
        else{
            i = i*3+1;
        }
        cout << i << endl;
    }
    cout << i << endl;

    return i;
}

void social_butterfly(string name)
{
    // Declare a static local varible, will persist though every
    // call to this function
    static string allnames = "";

    allnames += name + ' ';
    cout << allnames << endl;

}

int runningSum(int new_val)
{
    static int sum = 0;

    sum += new_val;

    return sum;
}