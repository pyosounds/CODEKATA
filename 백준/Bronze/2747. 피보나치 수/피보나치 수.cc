#include <bits/stdc++.h>
using namespace std;

int dp[46] = { 0, 1, };

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[n];

	return 0;
}