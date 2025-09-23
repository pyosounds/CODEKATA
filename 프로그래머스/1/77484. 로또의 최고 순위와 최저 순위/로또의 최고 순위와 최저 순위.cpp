#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool arr[46];
int ranking[7] = { 6, 6, 5, 4, 3, 2, 1 };

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> answer;
    
    for (int i = 0; i < win_nums.size(); ++i)
    {
        arr[win_nums[i]] = 1;
    }
    
    sort(lottos.begin(), lottos.end(), greater<>());
    
    int cnt = 0;
    int idx = 0;
    
    for (int i = 0; i < lottos.size(); ++i)
    {
        if (lottos[i] == 0)
        {
            break;
        }
        
        if (arr[lottos[i]])
        {
            ++cnt;
        }
        
        idx = i + 1;
    }
    
    answer.push_back(ranking[cnt + 6 - idx]);
    answer.push_back(ranking[cnt]);
    
    return answer;
}