#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 65)
        {
            return false;
        }
    }
    
    if (s.length() == 4 || s.length() == 6)
    {
        answer = true;
    }
    
    return answer;
}