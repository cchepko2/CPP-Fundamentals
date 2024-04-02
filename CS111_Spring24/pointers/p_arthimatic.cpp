#include <iostream>

int main(void)
{
    int nums[] = {100,101,2,3,4};
    int* somewhere_in_nums;

    somewhere_in_nums = nums; // an array name is the addess of the first element
    std::cout << "Value at somewhere_in_nums = " << *somewhere_in_nums
    << "\nand address is at " << somewhere_in_nums << std::endl;

    somewhere_in_nums += 2;
    std::cout << "Value at somewhere_in_nums = " << *somewhere_in_nums
    << "\nand address is at " << somewhere_in_nums << std::endl;

    std::cout << "nums[3] = " << nums[3] << " and using pointer: " <<
    *(somewhere_in_nums+1) << std::endl;

    // invalid pointers
    std::string *p, *q; // uninitialized pointer
    std::string some_num; // uninitialized variable
    p = &some_num;
    std::cout << *p << std::endl;
    std::cout << p;
    // add 10 to address of some_num
    p += 10;
    std::cout << *p << std::endl;
    std::cout << p;
    std::cout << *q << std::endl;  //Program crashes here because q is a nullptr, rest is gibierish though without values

    return 0;
}