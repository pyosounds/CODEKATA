#include <bits/stdc++.h>
using namespace std;

const int N = 101;
vector<int> Graph[N];
bool Visited[N];

int cnt = -1;

void DFS(int v)
{
	Visited[v] = true;
	++cnt;

	for (int u : Graph[v])
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

	int c, e;	
	cin >> c >> e;	

	for (int i = 0; i < e; ++i)
	{
		int n1, n2;
		cin >> n1 >> n2;

		Graph[n1].push_back(n2);
		Graph[n2].push_back(n1);
	}

	DFS(1);

	cout << cnt << '\n';

	return 0;
}