#include <bits/stdc++.h>
using namespace std;

long long dp[1000001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = dp[1] + dp[2] + 1;

	for (int i = 4; i <= 1000000; ++i)
	{
		dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % 1000000009;
	}

	while (T--)
	{
		int n;
		cin >> n;
	
		cout << dp[n] << '\n';
	}

	return 0;
}