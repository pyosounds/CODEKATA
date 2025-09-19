#include <vector>
#include <iostream>
using namespace std;

bool arr[3000];

void prime()
{
    for (int i = 2; i * i <= 3000; ++i)
    {
        if (arr[i])
        {
            continue;
        }
        
        for (int j = i * i; j <= 3000; j += i)
        {
            arr[j] = 1;
        }
    }
}

int solution(vector<int> nums)
{
    prime();
    
    int answer = 0;
    int Size = nums.size();
    
    for (int i = 0; i < Size - 2; ++i)
    {
        for (int j = i + 1; j < Size - 1; ++j)
        {
            for (int k = j + 1; k < Size; ++k)
            {
                if (!(arr[nums[i] + nums[j] + nums[k]]))
                {
                    ++answer;
                }
            }
        }
    }

    return answer;
}