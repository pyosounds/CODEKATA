#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
    int answer = 0;
    bool arr[10] = {};
    
    for (int i = 0; i < numbers.size(); ++i)
    {
        arr[numbers[i]] = 1;
    }
    
    for (int i = 0; i < 10; ++i)
    {
        if (!arr[i])
        {
            answer += i;
        }
    }
    
    return answer;
}