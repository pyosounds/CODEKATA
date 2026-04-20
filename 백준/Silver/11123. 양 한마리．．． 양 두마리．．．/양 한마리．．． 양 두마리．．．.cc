#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int T, H, W;
char arr[101][101];
bool vis[101][101];

void clear()
{
    for (int i = 0; i < 101; ++i)
    {
        for (int j = 0; j < 101; ++j)
        {
            arr[i][j] = 0;
            vis[i][j] = 0;
        }
    }
}

void solve()
{
    cin >> H >> W;

    for (int i = 0; i < H; ++i)
    {
        string str;
        cin >> str;

        for (int j = 0; j < W; ++j)
        {
            arr[i][j] = str[j];
        }
    }

    // BFS
    int Count = 0;

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (arr[i][j] == '.' || vis[i][j])
                continue;

            ++Count;

            queue<pair<int, int>> Q;
            Q.push({ i, j });
            vis[i][j];

            while (!Q.empty())
            {
                auto cur = Q.front();
                Q.pop();

                for (int dir = 0; dir < 4; ++dir)
                {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if (nx < 0 || nx >= H || ny < 0 || ny >= W)
                        continue;
                    if (arr[nx][ny] == '.' || vis[nx][ny])
                        continue;

                    Q.push({ nx, ny });
                    vis[nx][ny] = 1;
                }
            }
        }
    }

    cout << Count << '\n';

    clear();
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}