#include <iostream>

using namespace std;

// Fruitless function, does not return data to calling function
void helloworld(void)
{
    cout << "Hello World!" << endl;
}

void print_a_plus_b(double &a, double &b)
{
    cout << "a + b = " << a+b << endl;
    a = 99;
    b = 67; 
}

double print_a_plus_b_and_return(double a, double b)
{
    cout << "a + b = " << a+b << endl;
    double sum = a+b;

    a = 7;
    b = 99;

    return sum;  // Return this data to calling function
}

double distance_value(double time, double velocity)
{
    double distance = time*velocity;

    return distance;
}

void distance_ref(double time, double velocity, double &distance)
{
    distance = time*velocity;

}



int main()
{
    helloworld();  // Calling the function helloworld, main() is the caller, helloworld() is the callee
    
    double num1=0.5, num2 = 4;

    print_a_plus_b(num1, num2);

    
    double sum = print_a_plus_b_and_return(num1, num2);

    cout << "The return of print_a_plus_b_and_return(num1, num2) = " << sum << endl;

    double time, speed;
    cout << "Enter speed and time: ";
    cin >> speed >> time;
    printf("Distance from 100 m/s for 10s = %f", distance_value(time, speed));

    double distance;
    // This version of distance_ref changes the distance here in main() itself
    distance_ref(time, speed, distance);
    printf("Distance from 100 m/s for 10s = %f", distance);


    return 0;
}