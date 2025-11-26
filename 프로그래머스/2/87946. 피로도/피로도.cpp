#include <string>
#include <vector>

using namespace std;

bool Visited[9];
int answer;

void DFS(int k, int cnt, const vector<vector<int>>& dungeons)
{
	if (k < 0)
	{
		return;
	}

	for (int i = 0; i < dungeons.size(); ++i)
	{
		if (!Visited[i] && k >= dungeons[i][0])
		{
			Visited[i] = true;
			DFS(k - dungeons[i][1], cnt + 1, dungeons);
			Visited[i] = false;
		}
	}

	answer = max(answer, cnt);
}

int solution(int k, vector<vector<int>> dungeons)
{
	DFS(k, 0, dungeons);

	return answer;
}