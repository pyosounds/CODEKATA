#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

unordered_map<int, int> um;
unordered_set<int> us;

int solution(vector<int> topping)
{
    int answer = 0;
    
    for (int i = 0; i < topping.size(); ++i)
    {
        um[topping[i]] += 1;
    }

    for (int i = 0; i < topping.size(); ++i)
    {
        us.insert(topping[i]);
        um[topping[i]] -= 1;

        if (um[topping[i]] == 0)
        {
            um.erase(topping[i]);
        }

        if (um.size() == us.size())
        {
            ++answer;
        }
    }

    return answer;
}