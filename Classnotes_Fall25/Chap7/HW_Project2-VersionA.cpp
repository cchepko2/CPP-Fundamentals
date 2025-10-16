#include <iostream> 

using namespace std;

int main()
{
    int numbers[100];
    int already_counted[100];
    int num;
    int num_ints=0;

    cout << "Enter the numbers between 1 and 100 ending with 0: ";
    do
    {
        cin >> num;
        if(num > 1 and num < 100)
        {
            numbers[num_ints] = num;
            num_ints++;
        }

    } while (num != 0);

    bool already_counted_flag = false;
    for(int i=0; i<num_ints; i++)
    {
        int count = 1;
        if(numbers[i] == 0)
            break;

        already_counted_flag = false;
        for(int j=0; j<=i; j++)
        {
            if(numbers[i] == already_counted[j])
            {
                already_counted_flag = true;
            }
        }
        if(!already_counted_flag)
        {
            already_counted[i] = numbers[i];
            for(int j=i; j<num_ints; j++)
            {
                if(numbers[i] == numbers[j] and i != j)
                {
                    count++;
                }
            }
            if(count == 1)
            {
               cout << numbers[i] << " occurs " << count << " time." << endl; 
            }
            else
                cout << numbers[i] << " occurs " << count << " times." << endl;
        }
    }
    
    

    return 0;
}