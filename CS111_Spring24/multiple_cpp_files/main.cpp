#include <iostream>

void euler_sim(double projectile);

void do_something(int nums[], size_t size)
{
    for(int i=0;i<size;i++)
    {
        std::cout << "Val at i = " << nums[i] << std::endl;
    }
}

int main(void)
{
    int a,b,c;
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    
    a=3;
    b=4;

    std::cout << a << b << std::endl;

    do_something(nums, sizeof(nums)/sizeof(nums[0]));
    euler_sim(3.14235);

    return 0;
}