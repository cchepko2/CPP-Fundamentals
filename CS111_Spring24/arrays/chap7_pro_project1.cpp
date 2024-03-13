#include <iostream>

using namespace std;

char letter_grade(int score, int best);

int main(void)
{
    int num_students, best=0;

    cout << "Enter number of scores: ";

    cin >> num_students;
   //int scores[num_students]; // not valid
    int *scores = new int[num_students];  // Allocate an array of size num_students, 
                            //address of beginning of array is scores, can treat scores just like an array of size num_students

    cout << "Enter " << num_students << " scores: ";
    for(int i=0; i<num_students; i++)  // input scores
    {
        cin >> scores[i];
        if(scores[i] > best)
        {
            best = scores[i]; // Find top score
        }
    }

    for(int i=0; i<num_students; i++)  // print scores
    {
        cout << "Score of student " << i << " is " << scores[i] 
            << " and grade is " << letter_grade(scores[i], best) << endl;
    }

    return 0;
}

char letter_grade(int score, int best)
{
    if( score >= best - 10)
        return 'A';
    else if( score >= best - 20)
        return 'B';
    else if( score >= best - 30)
        return 'C';
    else if( score >= best - 40)
        return 'D';
    else
        return 'F';    
}