#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int k, int d)
{
    long long answer = 0;
    long long lk = static_cast<long long>(k);
    long long ld = static_cast<long long>(d);

    for (long long i = 0; i <= ld; i += lk)
    {
        long long y = (ld * ld) - (i * i);

        answer += static_cast<long long>(sqrt(y / (lk * lk))) + 1;
    }

    return answer;
}