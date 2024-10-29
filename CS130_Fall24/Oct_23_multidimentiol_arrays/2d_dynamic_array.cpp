
#include <iostream>

using namespace std;

int main(void)
{
    int screen_x = 32;
    int screen_y = 24;

    cout << "\n\n\nCan I allocate this much?\n" << screen_x*screen_y*sizeof(int) << " bytes" << endl;


    // dynamic allocation
    int *screen_colors = new int[screen_x*screen_y];

    printf("%x", screen_colors);

    for(int i=0; i<screen_x; i++)
    {
        for(int j=0; j<screen_y; j++)
        {
            //screen_colors[i][j] = j*320+i;
            int offset = i*screen_x+j;
            *(screen_colors+offset) = i*screen_x+j;
        }
    }

    for(int i=0; i<screen_x; i++)
    {
        for(int j=0; j<screen_y; j++)
        {
            //screen_colors[i][j] = j*320+i;
            int offset = i*screen_x+j;
            cout << *(screen_colors+offset) << ",";
        }
        cout << endl;
    }

    cout << "\n\n\nI did it!" << endl;


    return 0;
}