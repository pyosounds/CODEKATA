#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
vector<int> Graph[MAX];
bool Visited[MAX];

void DFS(int v)
{
	Visited[v] = true;

	for (auto u : Graph[v])
	{
		if (!Visited[u])
		{
			DFS(u);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;

		Graph[v1].push_back(v2);
		Graph[v2].push_back(v1);
	}

	int cnt = 0;

	for (int i = 1; i <= N; ++i)
	{
		if (!Visited[i])
		{
			DFS(i);
			++cnt;
		}
	}

	cout << cnt;

	return 0;
}