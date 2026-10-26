#include <vector>
#include <queue>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int solution(vector<vector<int> > maps)
{
	int answer = 0;

    const int N = 101;
    int graph[N][N];
    int dist[N][N];
    
	// init
	int n = maps.size();
	int m = maps[0].size();

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			graph[i + 1][j + 1] = maps[i][j];
		}
	}

	// solve
	queue<pair<int, int>> q;
	q.push({1, 1});
	dist[1][1] = 1;

	while (!q.empty())
	{
		auto cur = q.front(); q.pop();

		for (int dir = 0; dir < 4; ++dir)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
            if (!graph[nx][ny] || dist[nx][ny]) continue;

			q.push({ nx, ny });
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
		}
	}

	answer = dist[n][m] ? dist[n][m] : -1;
	return answer;
}