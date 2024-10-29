#include <iostream>

using namespace std;

int main(void)
{
    //cout << "\n\n\nCan I allocate this much?\n" << 3200*2400*sizeof(int) << " bytes" << endl;
    
    int screen_colors[320][240]; // Adding a zero to each dimension 
                            // exceeds our static ram allocation

    for(int i=0; i<320; i++)
    {
        for(int j=0; j<240; j++)
        {
            screen_colors[i][j] = j*320+i;
        }
    }

    cout << "\n\n\nI did it!" << endl;


    return 0;
}