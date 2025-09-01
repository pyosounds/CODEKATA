#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    
    int idx = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            idx = 0;
            answer += ' ';
        }
        else if (idx % 2 == 0)
        {
            if (s[i] >= 'a')
            {
                answer += s[i] - ('a' - 'A');                
            }
            else 
            {
                answer += s[i];
            }
            idx += 1;
        }
        else if (idx % 2 == 1)
        {
            if (s[i] < 'a')
            {
                answer += s[i] + ('a' - 'A');
            }
            else
            {
                answer += s[i];
            }
            idx += 1;
        }
    }
    
    return answer;
}