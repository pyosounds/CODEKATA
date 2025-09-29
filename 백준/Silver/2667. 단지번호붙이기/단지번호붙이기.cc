#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int arr[26][26];
bool vis[26][26];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		string s;
		cin >> s;

		for (int j = 0; j < N; ++j)
		{
			arr[i][j] = s[j] - '0';
		}
	}

	queue<pair<int, int>> Q;
	int cnt = 0;
	vector<int> result;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (arr[i][j] && !vis[i][j])
			{
				Q.push({ i, j });
				vis[i][j] = 1;
				++cnt;
				int temp = 1;

				while (!Q.empty())
				{
					auto cur = Q.front();
					Q.pop();					

					for (int dir = 0; dir < 4; ++dir)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx < 0 || nx >= N || ny < 0 || ny >= N)
						{
							continue;
						}
						if (vis[nx][ny] || !arr[nx][ny])
						{
							continue;
						}

						Q.push({ nx, ny });
						vis[nx][ny] = 1;
						temp += 1;
					}
				}

				result.push_back(temp);
			}
		}
	}

	cout << cnt << '\n';

	sort(result.begin(), result.end());

	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i] << '\n';
	}

	return 0;
}