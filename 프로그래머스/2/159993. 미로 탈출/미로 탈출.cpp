#include <string>
#include <vector>
#include <queue>

using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

char arr[101][101];
int dis[101][101];

void ClearArr(int N, int M)
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			dis[i][j] = 0;
		}
	}
}

int solution(vector<string> maps)
{
	int answer = -1;

	queue<pair<int, int>> q;
	queue<pair<int, int>> emptyq;

	int N = maps.size();
	int M = maps[0].size();

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			arr[i][j] = maps[i][j];

			if (maps[i][j] == 'S')
			{
				q.push({ i, j });
				dis[i][j] = 1;
			}
		}
	}

	// S -> L
	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();

		bool check = false;

		for (int dir = 0; dir < 4; ++dir)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
			{
				continue;
			}
			if (arr[nx][ny] == 'X' || dis[nx][ny])
			{
				continue;
			}

			q.push({ nx, ny });
			dis[nx][ny] = dis[cur.X][cur.Y] + 1;

			if (arr[nx][ny] == 'L')
			{
				answer = dis[nx][ny] - 1;
				check = true;

				ClearArr(N, M);

				q.swap(emptyq);
				q.push({ nx, ny });
				dis[nx][ny] = 1;

				break;
			}
		}

		if (check)
		{
			break;
		}
	}

	// L -> E
	bool LtoE = false;

	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();

		bool check = false;

		for (int dir = 0; dir < 4; ++dir)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
			{
				continue;
			}
			if (arr[nx][ny] == 'X' || dis[nx][ny])
			{
				continue;
			}

			q.push({ nx, ny });
			dis[nx][ny] = dis[cur.X][cur.Y] + 1;

			if (arr[nx][ny] == 'E')
			{
				answer += dis[nx][ny] - 1;
				check = true;
				LtoE = true;
				break;
			}
		}

		if (check)
		{
			break;
		}
	}

	if (!LtoE)
	{
		answer = -1;
	}

	return answer;
}