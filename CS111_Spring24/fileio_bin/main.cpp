#include <iostream>
#include <fstream>

int main(void)
{
   int number = 16;
   double doub = 32.32;
   double vals[] = {5,7,8.9,99};
   char name[25] = "Corin Chepko";

   int *int_ptr = reinterpret_cast<int*>(&doub);
   std::cout << "integer interpretation of bytes in doub varible: "
            << std::hex << *int_ptr << std::endl;

    std::ofstream fout;
    fout.open("out.bin", std::ios::binary | std::ios::out);

    if(!fout.is_open())
    {
        std::cout << "File open error." << std::endl;
        return -1;
    }

    fout.write(reinterpret_cast<char*>(&number), sizeof(number));
    fout.write(reinterpret_cast<char*>(&doub), sizeof(doub));
    //fout.write((char*)&number, sizeof(number));
    fout.close();

    std::ifstream fin;
    fin.open("out1.bin", std::ios::binary | std::ios::in);

    if(fin.fail() == false)
    {
        std::cout << "File does not exist." << std::endl;
    }

    int num2;
    fin.read((char*)&num2, sizeof(int));

    std::cout << num2 << std::endl;

    fin.close();

    std::cout << '\a';


    return 0;
}