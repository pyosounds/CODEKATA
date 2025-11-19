#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int arr[101][101];
bool vis[101][101];

vector<int> solution(vector<string> maps)
{
	vector<int> answer;

	int row = maps.size();
	int col = maps[0].size();

	// 초기화
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (maps[i][j] != 'X')
			{
				arr[i][j] = maps[i][j] - '0';
			}
		}
	}

	// BFS
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (arr[i][j] == 0 || vis[i][j])
			{
				continue;
			}

			queue<pair<int, int>> q;
			q.push({ i, j });
			vis[i][j] = true;

			int day = arr[i][j];

			while (!q.empty())
			{
				auto cur = q.front();
				q.pop();

				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= row || ny < 0 || ny >= col)
					{
						continue;
					}
					if (arr[nx][ny] == 0 || vis[nx][ny])
					{
						continue;
					}

					q.push({ nx, ny });
					vis[nx][ny] = true;

					day += arr[nx][ny];
				}
			}

			answer.push_back(day);
		}
	}

	if (answer.empty())
	{
		answer.push_back(-1);
	}

	sort(answer.begin(), answer.end());

	return answer;
}