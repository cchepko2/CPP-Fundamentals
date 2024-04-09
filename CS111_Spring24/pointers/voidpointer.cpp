#include <iostream>

struct Thing
{
    char alpha = 'a';
    int eger = 4;
    double num = 3.14;
};

int main(void)
{
    Thing thing;
    thing.eger = 15;
    thing.num = 56.7892354;

    char name[] = "Corin";
    int nums[] = {1,2,3,4};
    double doub_nums[] = {3.14,5.6,7.8,9.9};
    char* chr_ptr = name;
    int* int_ptr = &nums[2];
    double* doub_ptr = &doub_nums[1];

    printf("Address of chr_ptr = %x\n", chr_ptr);
    printf("Address of chr_ptr + 1 = %x\n", chr_ptr+1);
    //std::cout << "Address of chr_ptr = " << chr_ptr << std::endl;
    //std::cout << "Address of chr_ptr + 1= " << chr_ptr + 1 << std::endl;

    std::cout << "Address of int_ptr = " << int_ptr << std::endl;
    std::cout << "Address of int_ptr + 1= " << int_ptr + 1<< std::endl;

    std::cout << "Address of doub_ptr = " << doub_ptr << std::endl;
    std::cout << "Address of doub_ptr + 1= " << doub_ptr + 1<< std::endl;

    char alpha = 'b';
    int teger = 16;
    double num = 2.56;

    void * void_ptr;
    void_ptr = chr_ptr;

    std::cout << "void_ptr = " << void_ptr 
        << " and points to a value of " << *(char*)(void_ptr) << std::endl;

    void_ptr = void_ptr+1;
    std::cout << "void_ptr = " << void_ptr 
        << " and points to a value of " << *(char*)(void_ptr) << std::endl;
    
    std::cout << "Address of thing = " << &thing << std::endl;
    
    void_ptr = &thing;
    std::cout << "void_ptr = " << void_ptr 
        << " and points to a value of " << *(char*)(void_ptr) << std::endl;
    
    void_ptr = (void*)&thing + 4;
    std::cout << "void_ptr = " << void_ptr 
        << " and points to a value of " << *((int*)(void_ptr)) << std::endl;
    
    std::cout << "\nSizeof(char) = " << sizeof(char) << std::endl
        << "sizeof(thing.alpha) = " << sizeof(thing) << std::endl;
    
    return 0;
}