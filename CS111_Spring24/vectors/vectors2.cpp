#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Hits
{
    double distance;
    double angle;
    double speed;
};

int main(void)
{
    double distances[4][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    double angles[5] = {0,20,40,60,80};
    double speeds[5] = {0,10,20,30,40};
    double target_dist = 2.98;
    double close_enough = 0.5;
    int angle_index, speed_index;
    vector<double> hits_dist;
    vector<double> hits_ang;
    vector<double> hits_spd;
    vector<Hits> hits;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(fabs(distances[i][j]-target_dist) <= close_enough )
            {
                angle_index = i;
                speed_index = j;
                hits_dist.push_back(distances[i][j]);
                hits_ang.push_back(angles[i+1]);
                hits_spd.push_back(speeds[j+1]);
                
                Hits hit = {distances[i][j], angles[i+1], speeds[j+1]};
                hits.push_back(hit);

            }
        }
    }

    if(hits_dist.size() > 0 )
    {
        /*for(int i=0;i<hits_dist.size();i++)
        {
            cout << "Speed of " << hits_spd[i] << " angle of " << hits_ang[i] << " hits distance of "
                << hits_dist[i] << endl;
        }*/
        for(int i=0;i<hits.size();i++)
        {
            cout << "Speed of " << hits[i].speed << " angle of " << hits[i].angle << " hits distance of "
                << hits[i].speed << endl;
        }
    }

}