#include <bits/stdc++.h>
using namespace std;

int N, M;
int input[9];
int arr[9];
bool isUsed[9];

void solve(int K, int L)
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

    for (int i = L; i < N; ++i)
    {
        if (!isUsed[i])
        {
            arr[K] = input[i];
            isUsed[i] = 1;
            solve(K + 1, i + 1);
            isUsed[i] = 0;
        }
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

    solve(0, 0);

    return 0;
}