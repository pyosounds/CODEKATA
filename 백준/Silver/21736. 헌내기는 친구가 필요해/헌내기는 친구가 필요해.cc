#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

char arr[601][601];
bool vis[601][601];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	queue<pair<int, int>> Q;

	for (int i = 0; i < N; ++i)
	{
		string S;
		cin >> S;

		for (int j = 0; j < M; ++j)
		{
			arr[i][j] = S[j];

			if ('I' == S[j])
			{
				Q.push({ i, j });
				vis[i][j] = 1;
			}
		}
	}

	int Count = 0;

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
			if ('X' == arr[nx][ny] || vis[nx][ny])
				continue;

			Q.push({ nx, ny });
			vis[nx][ny] = 1;

			if ('P' == arr[nx][ny])
			{
				++Count;
			}
		}
	}
	
	if (0 == Count)
	{
		cout << "TT";
	}
	else
	{
		cout << Count;
	}

	return 0;
}