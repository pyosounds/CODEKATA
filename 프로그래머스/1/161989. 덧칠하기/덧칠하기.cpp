#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section)
{
    int answer = 1;
    int size = section.size();
    int idx = section[0];
    
    for (int i = 1; i < size; ++i)
    {
        if (section[i] - idx >= m)
        {
            ++answer;
            idx = section[i];
        }
    }
    
    return answer;
}