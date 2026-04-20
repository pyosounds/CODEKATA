#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

char arr[101][101];
bool rVis[101][101];
bool gVis[101][101];
bool bVis[101][101];
bool rgVis[101][101];

int N;
int rCount, gCount, bCount, rgCount;

void bfs(char C1, char C2, bool Vis[101][101], int& Count)
{
	queue<pair<int, int>> Q;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if ((C1 != arr[i][j] && C2 != arr[i][j]) || Vis[i][j])
				continue;

			++Count;

			Q.push({ i, j });
			Vis[i][j] = 1;

			while (!Q.empty())
			{
				auto cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= N || ny < 0 || ny >= N)
						continue;
					if ((C1 != arr[nx][ny] && C2 != arr[nx][ny]) || Vis[nx][ny])
						continue;

					Q.push({ nx, ny });
					Vis[nx][ny] = 1;
				}
			}

		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		string S;
		cin >> S;

		for (int j = 0; j < N; ++j)
		{
			arr[i][j] = S[j];
		}
	}
	
	bfs('R', 'R', rVis, rCount);
	bfs('G', 'G', gVis, gCount);
	bfs('B', 'B', bVis, bCount);
	bfs('R', 'G', rgVis, rgCount);

	int sum1 = rCount + gCount + bCount;
	int sum2 = rgCount + bCount;

	cout << sum1 << ' ' << sum2;

	return 0;
}