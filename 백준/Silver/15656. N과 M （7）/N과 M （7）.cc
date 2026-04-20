#include <bits/stdc++.h>
using namespace std;

int N, M;
int input[9];
int arr[9];

void solve(int K)
{
    if (K == M)
    {
        for (int i = 0; i < K; ++i)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';

        return;
    }

    for (int i = 0; i < N; ++i)
    {
        arr[K] = input[i];
        solve(K + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        cin >> input[i];
    }

    sort(input, input + N);

    solve(0);

    return 0;
}