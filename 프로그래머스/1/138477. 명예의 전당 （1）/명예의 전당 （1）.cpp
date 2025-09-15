#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> arr;
    
    for (int i = 0; i < score.size(); ++i)
    {
        arr.push_back(score[i]);
        sort(arr.begin(), arr.end(), greater<>());
        
        if (i >= k)
        {
            arr.pop_back();
        }
        
        answer.push_back(arr.back());
    }
    
    return answer;
}