#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int R, C;

char arr[1001][1001];
int J[1001][1001];
int F[1001][1001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> R >> C;

    queue<pair<int, int>> JQ, FQ;

    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            cin >> arr[i][j];

            if ('J' == arr[i][j])
            {
                JQ.push({ i, j });
                J[i][j] = 1;
            }
            else if ('F' == arr[i][j])
            {
                FQ.push({ i, j });
                F[i][j] = 1;
            }
            else if ('#' == arr[i][j])
            {
                J[i][j] = -1;
                F[i][j] = -1;
            }
        }
    }

    while (!FQ.empty())
    {
        pair<int, int> cur = FQ.front();
        FQ.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
                continue;
            if (-1 == F[nx][ny] || F[nx][ny] > 0)
                continue;

            F[nx][ny] = F[cur.X][cur.Y] + 1;
            FQ.push({ nx, ny });
        }
    }

    while (!JQ.empty())
    {
        pair<int, int> cur = JQ.front();
        JQ.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                cout << J[cur.X][cur.Y];

                return 0;
            }
            if (-1 == J[nx][ny] || J[nx][ny] > 0)
                continue;
            if (F[nx][ny])
            {
                if (J[cur.X][cur.Y] + 1 >= F[nx][ny])
                    continue;
            }

            J[nx][ny] = J[cur.X][cur.Y] + 1;
            JQ.push({ nx, ny });
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}