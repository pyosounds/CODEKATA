#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N, M;

int day[1001][1001];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
    cin >> M >> N;

    // Init
    queue<pair<int, int>> Q;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> day[i][j];

            if (1 == day[i][j])
            {
                Q.push({ i, j });
            }
        }
    }

    // BFS
    int Max = 1;

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
            if (day[nx][ny] > 0 || -1 == day[nx][ny])
                continue;

            day[nx][ny] = day[cur.X][cur.Y] + 1;
            Q.push({ nx, ny });

            if (day[nx][ny] > Max)
            {
                Max = day[nx][ny];
            }
        }
    }

    // day[i][j] == 0 -> -1
    bool Check = true;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (!day[i][j])
            {
                Check = false;
                break;
            }
        }
    }

    if (Check)
    {
        cout << Max - 1;
    }
    else
    {
        cout << -1;
    }
	
	return 0;
}