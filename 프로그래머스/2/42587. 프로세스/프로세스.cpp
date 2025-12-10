#include <string>
#include <vector>
#include <queue>

using namespace std;

int arr[10];
queue<pair<int, int>> q;

int solution(vector<int> priorities, int location)
{
	int answer = 0;

	for (int i = 0; i < priorities.size(); ++i)
	{
		arr[priorities[i]] += 1;
		q.push({ priorities[i], i });
	}

	int cnt = 0;

	while (true)
	{
		auto cur = q.front();
		bool check = true;

		if (cur.first < 9)
		{
			for (int i = cur.first + 1; i <= 9; ++i)
			{
				if (arr[i])
				{					
					q.pop();
					q.push(cur);
					check = false;
					break;
				}
			}
		}

		if (!check)
		{
			continue;
		}

		q.pop();
		arr[cur.first] -= 1;
		++cnt;

		if (cur.second == location)
		{
			answer = cnt;
			break;
		}
	}

	return answer;
}