#include <bits/stdc++.h>
using namespace std;

int dp[41];
int T;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> T;

	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= 40; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	while (T--)
	{
		int N;
		cin >> N;

		if (0 == N)
		{
			cout << 1 << ' ' << 0 << '\n';
		}
		else if (1 == N)
		{
			cout << 0 << ' ' << 1 << '\n';
		}
		else
		{
			cout << dp[N - 2] << ' ' << dp[N - 1] << '\n';
		}
	}
	
	return 0;
}