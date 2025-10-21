#include <string>
#include <vector>
#include <limits>
#include <cmath>

using namespace std;

string solution(string s)
{
    string answer = "";
    long long Max = numeric_limits<long long>::min();
    long long Min = numeric_limits<long long>::max();
    
    long long num = 0;
    bool minus = false;
    string temp;
    
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            if (temp.size() == 0)
            {
                continue;
            }
            
            num = stol(temp);
            
            if (minus)
            {
                num *= -1;
            }
            
            Max = max(num, Max);
            Min = min(num, Min);
            temp = "";
            minus = false;
        }
        else if (s[i] == '-')
        {
            minus = true;
        }
        else
        {
            temp += s[i];
        }
    }
    
    if (!temp.empty())
    {
        num = stol(temp);
            
        if (minus)
        {
            num *= -1;
        }
            
        Max = max(num, Max);
        Min = min(num, Min);
        temp = "";
        minus = false;
    }
    
    answer += to_string(Min);
    answer += " ";
    answer += to_string(Max);
    
    return answer;
}