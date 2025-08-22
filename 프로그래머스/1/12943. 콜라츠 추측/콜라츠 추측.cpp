#include <string>
#include <vector>

using namespace std;

int solution(int num)
{
    int answer = 0;
    int cnt = 0;
    long long t = num;
    
    if (t == 1)
    {
        return 0;
    }
    
    while (true)
    {
        if (t % 2 == 0)
        {
            t /= 2;
            ++cnt;
            
            if (cnt > 500)
            {
                answer = -1;
                break;
            }
            else if (t == 1)
            {
                answer = cnt;
                break;
            }
        }
        
        if (t % 2 == 1)
        {
            t *= 3;
            t += 1;
            ++cnt;
            
            if (cnt > 500)
            {
                answer = -1;
                break;
            }
        }
    }
    
    return answer;
}