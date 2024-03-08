#include <iostream>
#include <fstream>

using namespace std;

template <class T1>
void swap_two(T1 &n1, T1 &n2);

int main(void)
{
    int num_students;
    string student1, student2, student; // nmaes with top two scores
    float score1, score2, score;      // top two scores

    string file_name = "scores.txt";

    fstream fin(file_name);
    if(!fin.is_open())
    {
        cout << "File Error.\n";
        return -1;
    }

    fin >> num_students;
    fin >> student1 >> score1 >> student2 >> score2;

    //check which has a higher grade and sort
    if(score2 > score1) // Scores are in wrong order need to swap them and names
    {
        cout << student1 << " has " << score1 << " and " << student2 << " has " << score2 << endl;
        swap_two(score1, score2);
        swap_two(student1, student2);
        cout << student1 << " has " << score1 << " and " << student2 << " has " << score2 << endl;
    }

    for(int i=0;i<num_students-2;i++)
    {
        fin >> student >> score;

        if(score > score1) // now the biggest score
        {
            student2 = student1; // move student1 to second place
            score2 = score1;    // move score1 to second pla
            swap(score1, score); // swpa the new winner in
            swap(student1, student);
        }
        else if(score > score2) // found our new second place
        {
            student2 = student;
            score2 = score;
        }

    }
    
    cout << "\n\n";
    cout << student1 << " has " << score1 << " and " << student2 << " has " << score2 << endl;
    
    return 0;
}

template <class T1>
void swap_two(T1 &n1, T1 &n2)
{
    T1 temp = n1;
    n1 = n2;
    n2 = temp;
}