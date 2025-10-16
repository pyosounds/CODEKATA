#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<string, int> playerrank;
vector<string> playerarr;

vector<string> solution(vector<string> players, vector<string> callings)
{    
    for (int i = 0; i < players.size(); ++i)
    {
        playerrank.insert({ players[i], i });
        playerarr.push_back(players[i]);
    }
    
    for (int i = 0; i < callings.size(); ++i)
    {
        int pre = playerrank[callings[i]] - 1;
        
        string temp = playerarr[pre];
        playerarr[pre] = callings[i];
        playerarr[pre + 1] = temp;
        
        playerrank[callings[i]] -= 1;
        playerrank[temp] += 1;
    }
    
    return playerarr;
}