#include <string>
#include <vector>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    string str = to_string(n);
    
    int arr[10] = {};
    
    for (int i = 0; i < str.size(); ++i)
    {
        arr[str[i] - '0'] += 1;
    }
    
    str = "";
    
    for (int i = 9; i >= 0; --i)
    {
        for (int j = 0; j < arr[i]; ++j)
        {
            str += to_string(i);
        }
    }
    
    answer = stoll(str);
    
    return answer;
}