#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;

int arr[501][501];
bool vis[501][501];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	// init
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> arr[i][j];
		}
	}

	// BFS
	int Count = 0;
	int Max = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (vis[i][j] || 0 == arr[i][j])
				continue;

			++Count;

			queue<pair<int, int>> Q;
			vis[i][j] = 1;
			Q.push({ i, j });
			
			int area = 1;
			while (!Q.empty())
			{
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;
					if (0 == arr[nx][ny] || vis[nx][ny])
						continue;

					++area;

					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
			}

			if (area > Max)
			{
				Max = area;
			}
		}
	}

	cout << Count << '\n' << Max;

	return 0;
}