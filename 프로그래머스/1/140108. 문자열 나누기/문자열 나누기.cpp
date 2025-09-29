#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int slength = s.length();
    
    char x = s[0];
    int cnt1 = 1;
    int cnt2 = 0;    
    
    for (int i = 1; i < slength; ++i)
    {
        if (s[i] == x)
        {
            ++cnt1;
        }
        else if (s[i] != x)
        {
            ++cnt2;
            
            if (cnt1 == cnt2)
            {
                ++answer;
                
                if (i + 1 < slength)
                {
                    x = s[i + 1];
                    cnt1 = 1;
                    cnt2 = 0;
                    
                    i += 1;
                }
            }
        }
    }
    
    if (cnt2 == 0 || cnt1 > cnt2)
    {
        ++answer;
    }
    
    return answer;
}