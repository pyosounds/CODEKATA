#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[36];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	dp[0] = 1;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			dp[i] += dp[j] * dp[i - j - 1];
		}
	}

	cout << dp[n];

	return 0;
}