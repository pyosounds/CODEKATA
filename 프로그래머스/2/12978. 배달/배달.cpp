#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

static const long long INF = numeric_limits<long long>::max();

int solution(int N, vector<vector<int> > road, int K)
{
	int answer = 0;

	vector<vector<pair<int, int>>> graph(N + 1);

	for (const auto& edge : road)
	{
		graph[edge[0]].push_back({ edge[1], edge[2] });
        graph[edge[1]].push_back({ edge[0], edge[2] });
	}

	vector<long long> dist(N + 1, INF);

	int s = 1;
	dist[s] = 0;

	priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
	pq.push({ 0, s });

	while (!pq.empty())
	{
		auto [currentDist, currentNode] = pq.top();
		pq.pop();

		if (currentDist > dist[currentNode]) continue;

		for (const auto& [v, w] : graph[currentNode])
		{
			if (currentDist + w < dist[v])
			{
				dist[v] = currentDist + w;
				pq.push({ dist[v], v });
			}
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		if (dist[i] <= K)
		{
			++answer;
		}
	}

	return answer;
}