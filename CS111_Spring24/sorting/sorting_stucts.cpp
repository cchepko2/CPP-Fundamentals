#include <iostream>
#include <algorithm>

using namespace std;

struct Toy_ball
{
    char color;
    float radius;
    float mass;
};

void print_toys(Toy_ball toys[], size_t size)
{
    cout << endl;
    for(size_t i=0; i<size; i++)
    {
        cout << "Toy #" << i+1 << ' ' << toys[i].color 
        << ' ' << toys[i].mass << ' ' << toys[i].radius 
        << endl;
    }
}

bool toy_sort(Toy_ball a, Toy_ball b)
{
    //return which should be first
    //return a.color>b.color;
    return a.mass < b.mass;
}

int main(void)
{
    Toy_ball kid_toys[] = {{'b',5,10.5}, {'g', 2, 20}, {'r',13,2} };
    size_t size = sizeof(kid_toys)/sizeof(kid_toys[0]);

    cout << "Char size = " << sizeof(char) << endl;
    cout << "Float size = " << sizeof(float) << endl;
    cout << "Size of whole array of toys: " << sizeof(kid_toys) << endl;
    cout << "Size of single toy struct: " << sizeof(Toy_ball) << endl;
    cout << "Size of single toy struct: " << sizeof(kid_toys[0]) << endl;
    cout << endl;
    
    print_toys(kid_toys, size);

    sort(&kid_toys[0], &kid_toys[size], toy_sort);

    cout << endl;
    print_toys(kid_toys, size);

    return 0;
}