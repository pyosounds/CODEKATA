#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    string str;
    
    if (s[0] == '-')
    {
        for (int i = 1; i < s.size(); ++i)
        {
            str += s[i];
        }
        
        answer = stoi(str);
        answer *= -1;
    }
    else if (s[0] == '+')
    {
        for (int i = 1; i < s.size(); ++i)
        {
            str += s[i];
        }
        
        answer = stoi(str);
    }
    else
    {
        for (int i = 0; i < s.size(); ++i)
        {
            str += s[i];
            answer = stoi(str);
        }
    }
    
    return answer;
}