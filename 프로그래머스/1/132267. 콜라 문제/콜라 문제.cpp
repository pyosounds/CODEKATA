#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    int answer = 0;
    int cnt = n;
    
    while ((cnt / a) > 0)
    {
        int temp = (cnt / a) * b;
        answer += temp;
        cnt = (cnt % a) + temp;
    }
    
    return answer;
}