// declare and initialize vectors

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<string> words = {"i", "love", "c++", "vectors"};
    vector<float> prices = {1.99, 199, 2.99, 200.85, 45.71};

    words.push_back("Corin");

    for( string word:words )
    {
        cout << word << endl;
    }

    return 0;
}