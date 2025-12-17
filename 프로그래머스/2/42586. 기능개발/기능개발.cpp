#include <string>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

queue<int> q;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;

    for (int i = 0; i < progresses.size(); ++i)
    {
        q.push(ceil(static_cast<double>(100 - progresses[i]) / speeds[i]));
    }

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        int cnt = 1;

        while (!q.empty() && q.front() <= cur)
        {
            q.pop();
            ++cnt;
        }

        answer.push_back(cnt);
    }

    return answer;
}