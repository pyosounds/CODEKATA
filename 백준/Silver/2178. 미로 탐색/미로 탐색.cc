#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N, M;

int arr[101][101];
int dis[101][101];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	// init
	for (int i = 0; i < N; ++i)
	{
		string S;
		cin >> S;

		for (int j = 0; j < M; ++j)
		{
			arr[i][j] = S[j] - '0';
		}
	}

	// BFS
	queue<pair<int, int>> Q;
	dis[0][0] = 1;
	Q.push({ 0, 0 });

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; ++dir)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
				continue;
			if (0 == arr[nx][ny] || dis[nx][ny])
				continue;

			dis[nx][ny] = dis[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}

	const int x = N - 1;
	const int y = M - 1;

	cout << dis[x][y];

	return 0;
}