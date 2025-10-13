#include <bits/stdc++.h>
using namespace std;

#define MAX 2001

vector<int> Graph[MAX];
bool Visited[MAX];
bool Check;

void DFS(int v, int d)
{
	if (d == 5 || Check)
	{
		Check = true;
		return;
	}

	Visited[v] = true;

	for (int u : Graph[v])
	{
		if (!Visited[u])
		{
			DFS(u, d + 1);
		}
	}

	Visited[v] = false;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		int a, b;
		cin >> a >> b;

		Graph[a].push_back(b);
		Graph[b].push_back(a);
	}

	for (int i = 0; i < N; ++i)
	{
		if (!Graph[i].empty())
		{
			DFS(i, 1);

			if (Check)
			{
				break;
			}
		}
	}

	if (Check)
	{
		cout << 1 << '\n';
	}
	else
	{
		cout << 0 << '\n';
	}

	return 0;
}