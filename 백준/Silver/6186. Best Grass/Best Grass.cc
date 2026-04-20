#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

char arr[101][101];
bool vis[101][101];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int R, C;
    cin >> R >> C;

    for (int i = 0; i < R; ++i)
    {
        string s;
        cin >> s;

        for (int j = 0; j < C; ++j)
        {
            arr[i][j] = s[j];
        }
    }

    int Count = 0;

    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
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

                for (int dir = 0; dir < 4; ++dir)
                {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if (nx < 0 || nx >= R || ny < 0 || ny >= C)
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