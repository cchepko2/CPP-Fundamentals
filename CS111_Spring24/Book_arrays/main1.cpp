#include <iostream>

using namespace std;

char get_grade(int score, int best)
{
    if(score >= best-10)
        return 'A';
    else if(score >= best-20)
        return 'B';
    else if(score >= best-30)
        return 'C';
    else if(score >= best-40)
        return 'D';
    else
        return 'F';
}

int main(void)
{
    int num_students, best=0;
    cout << "Enter the number of students: ";
    cin >> num_students;
    
    const int MAX_STUDENTS = 100;
    int scores[MAX_STUDENTS];

    cout << "Enter " << num_students << " scores: ";
    for(int i=0;i<num_students;i++)
    {
        cin >> scores[i];
        if(scores[i] > best)
        {
            best = scores[i];
        }
    }
    for(int i=0;i<num_students;i++)
    {
        cout << "Student " << i << " score is " << scores[i]
            << " and grade is " << get_grade(scores[i], best) << endl;
    }
    
    return 0;
}