#include <bits/stdc++.h>
using namespace std;

int dp[1000001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= N; ++i)
    {
        int Min = dp[i - 1] + 1;

        if (0 == i % 3)
        {
            Min = min(dp[i / 3] + 1, Min);
        }
        if (0 == i % 2)
        {
            Min = min(dp[i / 2] + 1, Min);
        }

        dp[i] = Min;
    }

    cout << dp[N];

    return 0;
}