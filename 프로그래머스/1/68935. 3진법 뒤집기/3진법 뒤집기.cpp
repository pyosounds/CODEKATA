#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n)
{
    int answer = 0;    
    int i = n;
    string str = "";    
    
    while (true)
    {
        str += to_string(i % 3);
        i /= 3;
        
        if (i == 0)
        {
            break;
        }
    }
    
    for (int i = str.length() - 1; i >= 0; --i)
    {
        answer += (str[i] - '0') * pow(3, str.length() - 1 - i);
    }
    
    return answer;
}