#include <string>
#include <vector>

using namespace std;

const int MAX = 9;
bool visited[MAX];
int answer;

void backtrack(int k, int cnt, const vector<vector<int>>& dungeons)
{
	if (k < 0)
	{
		return;
	}

	for (int i = 0; i < dungeons.size(); ++i)
	{
		if (visited[i] || k - dungeons[i][0] < 0)
		{
			continue;
		}

		visited[i] = true;
		backtrack(k - dungeons[i][1], cnt + 1, dungeons);
		visited[i] = false;
	}

	answer = max(answer, cnt);
}

int solution(int k, vector<vector<int>> dungeons)
{
	backtrack(k, 0, dungeons);

	return answer;
}