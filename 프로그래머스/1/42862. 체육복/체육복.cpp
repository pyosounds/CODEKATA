#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool lostarr[31];
bool reservearr[31];
bool arr[32];
vector<int> newlost;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;

    for (int i = 0; i < lost.size(); ++i)
    {
        lostarr[lost[i]] = true;
    }

    for (int i = 0; i < reserve.size(); ++i)
    {
        reservearr[reserve[i]] = true;
        arr[reserve[i]] = true;
    }

    for (int i = 1; i <= 30; ++i)
    {
        if (lostarr[i])
        {
            if (reservearr[i])
            {
                arr[i] = false;
            }
            else
            {
                newlost.push_back(i);
            }
        }
    }

    answer = n - newlost.size();

    for (int i = 0; i < newlost.size(); ++i)
    {
        if (arr[newlost[i] - 1])
        {
            arr[newlost[i] - 1] = false;
            ++answer;
        }
        else if (arr[newlost[i] + 1])
        {
            arr[newlost[i] + 1] = false;
            ++answer;
        }
    }

    return answer;
}