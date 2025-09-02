#include <string>
#include <vector>

using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    int loop = t.size() - p.size();
    
    for (int i = 0; i <= loop; ++i)
    {
        string temp = "";
        
        for (int j = 0; j < p.size(); ++j)
        {
            temp += t[i + j];
        }
        
        if (stoll(temp) <= stoll(p))
        {
            ++answer;
        }
    }
    
    return answer;
}