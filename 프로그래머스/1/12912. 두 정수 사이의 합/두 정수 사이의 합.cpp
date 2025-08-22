#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b)
{
    long long answer = 0;
    long long f = a >= b ? a : b;
    long long s = a < b ? a : b;
    
    answer = ((f - s + 1) * (f + s)) / 2;    
    
    return answer;
}