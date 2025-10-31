#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

multiset<int, greater<int>> s;
map<int, int> m;

int solution(int k, vector<int> tangerine)
{
    int answer = 0;

	for (int i = 0; i < tangerine.size(); ++i)
	{
		if (m.find(tangerine[i]) == m.end())
		{
			m.insert({ tangerine[i], 1 });
		}
		else
		{
			m[tangerine[i]] += 1;
		}
	}

	for (int i = 0; i < m.size(); ++i)
	{
		s.insert(m[i]);
	}

	for (auto iter = s.begin(); iter != s.end(); ++iter)
	{
		k -= *iter;
		++answer;

		if (k <= 0)
		{
			break;
		}
	}

    return answer;
}