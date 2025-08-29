#include <string>
#include <vector>
#include <cmath>

using namespace std;

int GCD(int a, int b)
{
    while (b > 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

vector<int> solution(int n, int m)
{
    int a = max(n, m);
    int b = min(n, m);
    
    return { GCD(a, b), (a * b) / GCD(a, b) };
}