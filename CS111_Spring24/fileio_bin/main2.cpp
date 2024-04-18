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
    int num_chars = 12;
    char name[25] = "Corin Chepko";
    double doub_num = 32.32;

    Student corin;
    strncpy(corin.name, name, 25);
    corin.average = 0;
    for(int i=0;i<10;i++)
    {
        corin.grades[i] = i*4;
        corin.average += i*4;
    }
    corin.average /= 10;
    corin.id = 70076674;
    
    Student phil = {"Philip", 70087643, {1,2,3,4,5,6,7,8,9,10}, 5};
    Student sarah = {"Sarah", 70012345, {1,2,3,4,5,6,7,8,9,11}, 5.5};

    std::ofstream fout;
    fout.open("student_records.bin", std::ios::binary | std::ios::out);
    if(!fout.is_open())
    {
        std::cout << "File error." << std::endl;
        return -1;
    }
    fout.write(reinterpret_cast<char*>(&corin), sizeof(Student));
    fout.write(reinterpret_cast<char*>(&phil), sizeof(Student));
    fout.write(reinterpret_cast<char*>(&sarah), sizeof(Student));
    fout.close();

    /*std::ofstream fout;
    fout.open("out.bin", std::ios::binary | std::ios::out);
    if(!fout.is_open())
    {
        std::cout << "File error." << std::endl;
        return -1;
    }

    fout.write(reinterpret_cast<char*>(&num_chars), sizeof(num_chars));
    fout.write(name, sizeof(name));
    fout.write(reinterpret_cast<char*>(&doub_num), sizeof(doub_num));

    fout.close();

    std::ifstream fin;
    fin.open("out.bin", std::ios::binary | std::ios::in);
    if(!fin.is_open())
    {
        std::cout << "File error." << std::endl;
        return -1;
    }

    int read_int;
    fin.read(reinterpret_cast<char*>(&read_int), sizeof(int));
    fin.read(name, sizeof(name));
    fin.close();

    std::cout << "Name is " << name << std::endl;*/

    return 0;
}