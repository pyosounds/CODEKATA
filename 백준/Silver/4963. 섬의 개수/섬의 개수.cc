#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
int dy[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int arr[51][51];
int vis[51][51];

void Clear(int h, int w);

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		int w, h;
		cin >> w >> h;

		if (w == 0 && h == 0)
		{
			break;
		}

		queue<pair<int, int>> q;

		for (int i = 0; i < h; ++i)
		{
			for (int j = 0; j < w; ++j)
			{
				cin >> arr[i][j];				
			}
		}

		int cnt = 0;

		for (int i = 0; i < h; ++i)
		{
			for (int j = 0; j < w; ++j)
			{
				if (!arr[i][j] || vis[i][j])
				{
					continue;
				}

				++cnt;

				q.push({ i, j });
				vis[i][j] = true;

				while (!q.empty())
				{
					auto cur = q.front();
					q.pop();

					for (int dir = 0; dir < 8; ++dir)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx < 0 || nx >= h || ny < 0 || ny >= w)
						{
							continue;
						}
						if (!arr[nx][ny] || vis[nx][ny])
						{
							continue;
						}

						q.push({ nx, ny });
						vis[nx][ny] = true;
					}
				}
			}
		}

		cout << cnt << '\n';

		Clear(h, w);
	}

	return 0;
}

void Clear(int h, int w)
{
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			arr[i][j] = 0;
			vis[i][j] = 0;
		}
	}
}