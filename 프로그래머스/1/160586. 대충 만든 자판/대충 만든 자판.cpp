#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<char, int> Map;

vector<int> solution(vector<string> keymap, vector<string> targets)
{
    vector<int> answer;
    
    for (int i = 0; i < keymap.size(); ++i)
    {
        for (int j = 0; j < keymap[i].size(); ++j)
        {
            if (Map.find(keymap[i][j]) == Map.end())
            {
                Map.insert({ keymap[i][j], j + 1 });
            }
            else
            {
                if (Map[keymap[i][j]] > j + 1)
                {
                    Map[keymap[i][j]] = j + 1;
                }
            }
        }
    }
    
    for (int i = 0; i < targets.size(); ++i)
    {
        int cnt = 0;
        bool check = false;
        
        for (int j = 0; j < targets[i].size(); ++j)
        {
            if (Map.find(targets[i][j]) == Map.end())
            {
                check = true;
                break;
            }
            
            cnt += Map[targets[i][j]];
        }
        
        if (check)
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(cnt);
        }        
    }
    
    return answer;
}