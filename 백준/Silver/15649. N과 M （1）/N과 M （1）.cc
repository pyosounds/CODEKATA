#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[9];
bool isUsed[9];

void solve(int k)
{
    if (M == k)
    {
        for (int i = 0; i < M; ++i)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';

        return;
    }
    
    for (int i = 1; i <= N; ++i)
    {
        if (!isUsed[i])
        {
            arr[k] = i;
            isUsed[i] = 1;
            solve(k + 1);
            isUsed[i] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;

    solve(0);

    return 0;
}