#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> commands)
{
    vector<int> answer;    
    size_t loop = commands.size();
    
    for (size_t i = 0; i < loop; ++i)
    {
        vector<int> copyarr = arr;
        
        sort(copyarr.begin() + commands[i][0] - 1, copyarr.begin() + commands[i][1]);
        
        answer.push_back(copyarr[commands[i][0] - 1 + commands[i][2] - 1]);
    }
    
    return answer;
}