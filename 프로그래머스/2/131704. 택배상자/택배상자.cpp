#include <string>
#include <vector>
#include <stack>

using namespace std;

stack<int> s;

int solution(vector<int> order)
{
    int answer = 0;
    int idx = 0;

    for (int i = 1; i <= order.size(); ++i)
    {
        s.push(i);

        while (!s.empty() && s.top() == order[idx])
        {
            s.pop();            
            ++answer;
            ++idx;
        }
    }

    return answer;
}