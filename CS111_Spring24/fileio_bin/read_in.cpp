#include <iostream>
#include <fstream>
#include <cstring>

struct Student
{
    char name[260];
    int id;
    double grades[10];
    double average;
};

int main(void)
{
    Student record;

    std::ifstream fin;
    fin.open("student_records.bin", std::ios::binary | std::ios::in);
    if(!fin.is_open())
    {
        std::cout << "File error." << std::endl;
        return -1;
    }

    fin.read(reinterpret_cast<char*>(&record), sizeof(record));

    std::cout << record.name << std::endl;

     fin.seekg(-sizeof(Student), fin.cur); // Seeks a position sizeof(Student) bytes from current position

    fin.read(reinterpret_cast<char*>(&record), sizeof(record));

    std::cout << record.name << std::endl;

    return 0;   
}