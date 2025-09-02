#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";
    
    for (int i = 0; i < s.size(); ++i)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            answer += 'A' + (((s[i] + n) % 'A') % 26);
        }
        else if ('a' <= s[i] && s[i] <= 'z')
        {
            answer += 'a' + (((s[i] + n) % 'a') % 26);
        }
        else
        {
            answer += s[i];
        }        
    }
    
    return answer;
}