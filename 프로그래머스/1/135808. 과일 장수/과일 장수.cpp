#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score)
{
    int answer = 0;
    sort(score.begin(), score.end(), greater<>());
    
    int size = score.size();
    int idx = 0;
    
    while (size >= m)
    {
        answer += score[idx + (m - 1)] * m;
        idx += m;
        size -= m;
    }
    
    return answer;
}