#include <string>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> solution(vector<int> sequence, int k)
{
    vector<int> answer(2);

    int s = 0, e = 0;
    int Sum = 0;
    int Min = INT_MAX;

    while (true)
    {
        Sum += sequence[e];

        while (Sum >= k)
        {
            if (Sum == k && e - s < Min)
            {
                answer[0] = s;
                answer[1] = e;
                Min = e - s;
            }

            Sum -= sequence[s];
            ++s;
        }

        ++e;

        if (e >= sequence.size())
        {
            break;
        }
    }

    return answer;
}