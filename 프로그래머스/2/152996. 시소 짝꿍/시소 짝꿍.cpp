#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> ul;

long long solution(vector<int> weights)
{
	long long answer = 0;

	for (int i = 0; i < weights.size(); ++i)
	{
		ul[weights[i]] += 1;
	}

	for (auto iter = ul.begin(); iter != ul.end(); ++iter)
	{
		long long w = iter->first;
		long long cnt = iter->second;

		// 1:1
		answer += cnt * (cnt - 1) / 2;
		
		// 2:1
		if (ul.find(w * 2) != ul.end())
		{
			answer += cnt * ul[w * 2];
		}

		// 3:2
		if (w * 3 % 2 == 0)
		{
			if (ul.find(w * 3 / 2) != ul.end())
			{
				answer += cnt * ul[w * 3 / 2];
			}
		}

		// 4:3
		if (w * 4 % 3 == 0)
		{
			if (ul.find(w * 4 / 3) != ul.end())
			{
				answer += cnt * ul[w * 4 / 3];
			}
		}		
	}

	return answer;
}