#include <bits/stdc++.h>
using namespace std;

int dp[31][31];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	dp[1][1] = 1;

	for (int i = 2; i <= 30; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
		}
	}

	int T;
	cin >> T;

	while (T--)
	{
		int N, M;
		cin >> N >> M;

		cout << dp[M + 1][N + 1] << '\n';
	}

	return 0;
}