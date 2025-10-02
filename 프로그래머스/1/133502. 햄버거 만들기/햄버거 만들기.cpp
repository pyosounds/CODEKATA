#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> s;

int solution(vector<int> ingredient)
{
    int answer = 0;

    for (int i = 0; i < ingredient.size(); ++i)
    {
        s.push_back(ingredient[i]);
        int size = s.size();

        if (size >= 4)
        {
            if (
                s[size - 1] == 1 &&
                s[size - 2] == 3 &&
                s[size - 3] == 2 &&
                s[size - 4] == 1
                )
            {
                ++answer;

                for (int j = 0; j < 4; ++j)
                {
                    s.pop_back();
                }
            }
        }
    }

    return answer;
}