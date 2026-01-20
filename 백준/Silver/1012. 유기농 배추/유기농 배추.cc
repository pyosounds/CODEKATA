#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int arr[51][51];
bool vis[51][51];

void Clear(int N, int M);

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		int M, N, K;
		cin >> M >> N >> K;

		while (K--)
		{
			int X, Y;
			cin >> X >> Y;

			arr[Y][X] = 1;
		}

		int cnt = 0;

		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				if (!arr[i][j] || vis[i][j])
				{
					continue;
				}

				++cnt;

				queue<pair<int, int>> q;
				q.push({ i, j });
				vis[i][j] = 1;

				while (!q.empty())
				{
					auto cur = q.front();
					q.pop();

					for (int dir = 0; dir < 4; ++dir)
					{
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];

						if (nx < 0 || nx >= N || ny < 0 || ny >= M)
						{
							continue;
						}
						if (!arr[nx][ny] || vis[nx][ny])
						{
							continue;
						}

						q.push({ nx, ny });
						vis[nx][ny] = 1;
					}
				}
			}
		}

		cout << cnt << '\n';

		Clear(N, M);
	}

	return 0;
}

void Clear(int N, int M)
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			arr[i][j] = 0;
			vis[i][j] = 0;
		}
	}
}