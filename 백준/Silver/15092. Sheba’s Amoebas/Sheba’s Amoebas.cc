#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
int dy[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

char arr[101][101];
bool vis[101][101];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int m, n;
	cin >> m >> n;

	for (int i = 0; i < m; ++i)
	{
		string S;
		cin >> S;

		for (int j = 0; j < n; ++j)
		{
			arr[i][j] = S[j];
		}
	}
	
	int Count = 0;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if ('.' == arr[i][j] || vis[i][j])
				continue;

			++Count;

			queue<pair<int, int>> Q;
			Q.push({ i, j });
			vis[i][j] = 1;

			while (!Q.empty())
			{
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 8; ++dir)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= m || ny < 0 || ny >= n)
						continue;
					if ('.' == arr[nx][ny] || vis[nx][ny])
						continue;

					Q.push({ nx, ny });
					vis[nx][ny] = 1;
				}
			}
		}
	}

	cout << Count;

	return 0;
}