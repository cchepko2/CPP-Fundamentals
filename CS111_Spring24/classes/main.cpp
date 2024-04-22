#include <iostream>
#include <cstring>

using namespace std;

class STUDENT
{
private:
    int valuable;
public:
    char name[25]= "Alice";
    int ID = 700;
    float grade = 25;

    STUDENT()
    {
        cout << "I'm run when an object is created!" << endl;    
    }

    STUDENT(char name_e[25], int id, float g)
    {
        strncpy(name, name_e, 25);
        ID = id;
        grade = g;
    }
    

    void double_grade()
    {
        grade = grade*2;
    }
};

int main(void)
{
    STUDENT stud;  // Used default empty constuctor to create instance of object "stud"

    cout << stud.name << " " << stud.grade << endl;

    stud.name[0] =  'C';
    stud.name[1] = '\0';
    stud.ID = 700;
    stud.grade = 50;

    cout << stud.name << " " << stud.grade << endl;

    stud.double_grade();

    cout << stud.name << " " << stud.grade << endl;

    return 0;
}