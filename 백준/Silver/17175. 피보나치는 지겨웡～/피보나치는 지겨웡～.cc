#include <bits/stdc++.h>
using namespace std;

long long dp[51];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = (dp[i - 2] + dp[i - 1] + 1) % 1000000007;
	}

	cout << dp[n] << '\n';

	return 0;
}