#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int answer = 0;
    int wMax = 0, hMax = 0;
    
    for (int i = 0; i < sizes.size(); ++i)
    {
        int w = max(sizes[i][0], sizes[i][1]);
        int h = min(sizes[i][0], sizes[i][1]);
        
        wMax = max(wMax, w);
        hMax = max(hMax, h);
    }
    
    answer = wMax * hMax;    
    
    return answer;
}