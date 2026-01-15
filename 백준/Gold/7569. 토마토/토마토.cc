#include <bits/stdc++.h>
using namespace std;

int dz[6] = { 0, 0, 0, 0, 1, -1 };
int dx[6] = { 1, 0, -1, 0, 0, 0 };
int dy[6] = { 0, 1, 0, -1, 0, 0 };

int dis[101][101][101];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int M, N, H;
	cin >> M >> N >> H;

	queue<tuple<int, int, int>> q;

	for (int h = 0; h < H; ++h)
	{
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				int n;
				cin >> n;

				if (n == -1)
				{
					dis[h][i][j] = -1;
				}
				else if (n == 1)
				{
					dis[h][i][j] = 1;
					q.push({ h, i, j });
				}
			}
		}
	}

	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();

		for (int dir = 0; dir < 6; ++dir)
		{
			int nz = get<0>(cur) + dz[dir];
			int nx = get<1>(cur) + dx[dir];
			int ny = get<2>(cur) + dy[dir];

			if (nz < 0 || nz >= H || nx < 0 || nx >= N || ny < 0 || ny >= M)
			{
				continue;
			}
			if (dis[nz][nx][ny])
			{
				continue;
			}

			q.push({ nz, nx, ny });
			dis[nz][nx][ny] = dis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
		}
	}

	int Max = 0;

	for (int h = 0; h < H; ++h)
	{
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				if (!dis[h][i][j])
				{
					cout << -1 << '\n';
					return 0;
				}

				if (dis[h][i][j] > Max)
				{
					Max = dis[h][i][j];
				}
			}
		}
	}

	cout << Max - 1 << '\n';

	return 0;
}