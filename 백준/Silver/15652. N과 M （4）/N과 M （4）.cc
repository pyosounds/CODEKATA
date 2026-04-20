#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[9];

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

    for (int i = L; i <= N; ++i)
    {
        arr[K] = i;
        solve(K + 1, i);
    }
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	solve(0, 1);

	return 0;
}