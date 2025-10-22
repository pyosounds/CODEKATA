#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = s;
    string temp;
    bool first = true;
    
    for (int i = 0; i < s.size(); ++i)
    {
        if (first)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            
            if ('0' <= s[i] && s[i] <= '9')
            {
                first = false;
                continue;
            }
            
            if ('a' <= s[i] && s[i] <= 'z')
            {
                answer[i] -= 'a' - 'A';
            }
            
            first = false;
        }
        else
        {
            if (s[i] == ' ')
            {
                first = true;
            }        
            else if ('0' <= s[i] && s[i] <= '9')
            {
                continue;
            }
            else if ('A' <= s[i] && s[i] <= 'Z')
            {
                answer[i] += 'a' - 'A';
            }
        }
    }
    
    return answer;
}