#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<string> wallpaper)
{
    vector<int> answer;
    
    int lx = wallpaper.size();
    int ly = wallpaper[0].size();
    int rx = 0;
    int ry = 0;
    
    for (int i = 0; i < wallpaper.size(); ++i)
    {
        for (int j = 0; j < wallpaper[i].size(); ++j)
        {
            if (wallpaper[i][j] == '#')
            {
                lx = min(lx, i);
                ly = min(ly, j);
                rx = max(rx, i);
                ry = max(ry, j);
            }
        }        
    }
    
    answer.push_back(lx);
    answer.push_back(ly);
    answer.push_back(rx + 1);
    answer.push_back(ry + 1);
    
    return answer;
}