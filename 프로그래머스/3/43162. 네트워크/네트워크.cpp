#include <string>
#include <vector>

using namespace std;

const int N = 201;
vector<int> graph[N];
bool visited[N];

void DFS(int v)
{
	visited[v] = true;

	for (int u : graph[v])
	{
		if (!visited[u])
		{
			DFS(u);
		}
	}
}

int solution(int n, vector<vector<int>> computers)
{
	int answer = 0;

	for (int i = 0; i < computers.size(); ++i)
	{
		for (int j = 0; j < computers[0].size(); ++j)
		{
			if (computers[i][j])
			{
				graph[i].push_back(j);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (!visited[i])
		{
			DFS(i);
			answer++;
		}
	}

	return answer;
}