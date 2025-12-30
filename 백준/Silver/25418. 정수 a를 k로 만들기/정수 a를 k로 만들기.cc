#include <bits/stdc++.h>
using namespace std;

int dp[1000001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int A, K;
	cin >> A >> K;

	for (int i = A; i <= K; ++i)
	{
		dp[i] = dp[i - 1] + 1;

		if (i % 2 == 0 && dp[i / 2])
		{
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
	}

	cout << dp[K] - 1;

	return 0;
}