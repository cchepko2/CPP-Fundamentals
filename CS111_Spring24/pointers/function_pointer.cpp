#include <iostream>

int add_two(int a, int b)
{
    return a+b;
}
int sub_two(int a, int b)
{
    return a-b;
}
int operation(int a,int b, int (*func)(int, int))
{
    return (*func)(a,b);
}

int main(void)
{
    int a=3,b=6;
    std::string ans;

    int (*function_ptr)(int, int);
    std::cout << "Address of add function = " << add_two << std::endl;
    std::cout << "Address of subtract function = " << sub_two << std::endl;
    std::cout << "Want to add or subtract" << std::endl;
    std::cin >> ans;
    if( ans == "add" )
    {
        function_ptr = add_two;
    }
    else if(ans == "subtract")
    {
        function_ptr = sub_two;
    }

    std::cout << "a " << ans << " b = " << operation(a,b,function_ptr) << std::endl;

    return 0;
}