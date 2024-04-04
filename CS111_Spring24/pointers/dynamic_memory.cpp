#include <iostream>
#include <fstream>

int main(void)
{
    int rows, columns;
    std::ofstream fout;

    fout.open("table.txt");
    if(!fout.is_open())
    {
        std::cerr << "It's the end of the world, run!" << std::endl;
        return -1;
    }

    std::cout << "Enter size of table separated by spaces (rows columns)"
    << std::endl;

    std::cin >> rows >> columns;

    double *distances = new double[rows*columns];
    double *speeds = new double[columns+1];
    double *angles = new double[rows+1];
    for(int i=0; i<=columns; i++) // Fill in speeds array
    {
        double speed_inc = 100.0/columns;
        *(speeds+i) = i*speed_inc;
        fout << *(speeds+i) << ',';
        std::cout << *(speeds+i) << ',';
    }
    fout << '\n';
    std::cout << '\n';
    for(int i=0; i<=rows; i++) // Fill in angles array
    {
        double angle_inc = 90.0/rows;
        *(angles+i) = i*angle_inc;
    }

    //std::cout << distances << std::endl;

    for(int i=0; i<rows; i++)
    {
        fout << *(angles + i+1) << ',';
        std::cout << *(angles + i+1) << ',';
        for(int j=0; j<columns; j++)
        {
            double val = *(distances + i*columns+j) = i*columns+j;
            //double *address_of_current_val;
            //address_current_val = distances;
            std::cout << val << ',';
            fout << val << ',';
        }
        std::cout << '\n';
        fout << '\n';
    }

    delete [] distances;
    fout.close();

    return 0;
}