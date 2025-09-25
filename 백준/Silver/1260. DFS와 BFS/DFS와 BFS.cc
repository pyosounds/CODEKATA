#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
vector<int> Graph[MAX];
bool DFSVisited[MAX];
bool BFSVisited[MAX];

void DFS(int v)
{
	DFSVisited[v] = true;
	cout << v << " ";

	for (int u : Graph[v])
	{
		if (!DFSVisited[u])
		{
			DFS(u);
		}
	}
}

void BFS(int v)
{
	queue<int> Q;
	Q.push(v);
	BFSVisited[v] = true;
	cout << v << " ";

	while (!Q.empty())
	{
		int u = Q.front();
		Q.pop();

		for (int w : Graph[u])
		{
			if (!BFSVisited[w])
			{
				Q.push(w);
				BFSVisited[w] = true;
				cout << w << " ";
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N, M, V;
	cin >> N >> M >> V;

	for (int i = 0; i < M; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;

		Graph[v1].push_back(v2);
		Graph[v2].push_back(v1);
	}

	for (int i = 1; i <= N; ++i)
	{
		sort(Graph[i].begin(), Graph[i].end());
	}

	DFS(V);
	cout << '\n';
	BFS(V);

	return 0;
}