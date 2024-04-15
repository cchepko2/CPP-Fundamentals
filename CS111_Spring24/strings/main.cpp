#include <iostream>

int main(void)
{
    std::string fname, lname;

    fname = "Corin";
    lname = "Chepko";

    std::cout << "Max string size on this computer: " << 
        fname.max_size() << std::endl;
    
    fname.append(lname);

    std::cout << fname << std::endl;

    std::cout << fname.empty() << std::endl;


    std::cout << fname.at(9) <<std::endl;

    for(int i=0; i<fname.length();i++)
    {
        std::cout << fname[i] << std::endl;
    }
    std::cout << '\n';
    auto it = fname.begin();
    for(auto it=fname.begin();it<=fname.end();it++)
    {
        std::cout << *it; //have to use * to dereference pointer and access value
    }
    std::cout << std::endl;

    for(auto it=fname.rbegin();it<=fname.rend();it++)
    {
        std::cout << *it; //have to use * to dereference pointer and access value
    }
    std::cout << std::endl;

    return 0;
}