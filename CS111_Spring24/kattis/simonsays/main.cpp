/*
Corin Chepko
4/4/24
Kattis Problem: Simon says - https://open.kattis.com/problems/simonsays
*/


#include <iostream>
#include <cstring>

int main(void)
{
    int num_phrases;
    char phrase[101] = "Simon says jump.";
    char simon_says[] = "Simon says";
    char *simon_says_beg = &phrase[10];

    std::cin >> num_phrases;
    //std::cin.ignore(1000, '\n');
    for(int i=0; i<num_phrases; i++)
    {
        std::cin.ignore(100, '\n');
        std::cin.get(phrase, 100, '\n');

        if(strncmp(simon_says, phrase, 10) == 0)
        {
            std::cout << simon_says_beg << std::endl;
        }
    }


    return 0;
}