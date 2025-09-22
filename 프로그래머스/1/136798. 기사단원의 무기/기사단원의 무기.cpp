#include <string>
#include <vector>
#include <cmath>

using namespace std;

int Count(int n, int limit, int power)
{
    int cnt = 0;
    int square = static_cast<int>(sqrt(n));
    
    bool check = square * square == n ? true : false;
    
    if (check)
    {
        for (int i = 1; i < square; ++i)
        {
            if (n % i == 0)
            {
                cnt += 2;
                if (cnt >= limit)
                {
                    return power;
                }
            }
        }
        
        cnt += 1;
    }
    else
    {
        for (int i = 1; i <= square; ++i)
        {
            if (n % i == 0)
            {
                cnt += 2;
                if (cnt > limit)
                {
                    return power;
                }
            }
        }
    }
    
    return cnt;
}

int solution(int number, int limit, int power)
{
    int answer = 0;
    
    for (int i = 1; i <= number; ++i)
    {
        answer += Count(i, limit, power);
    }
    
    return answer;
}