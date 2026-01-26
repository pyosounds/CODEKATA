#include <bits/stdc++.h>
using namespace std;

long long dp[101] = { 0, 1, 1, 1, };

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 4; i <= 100; ++i)
	{
		dp[i] = dp[i - 2] + dp[i - 3];
	}

	while (T--)
	{
		int N;
		cin >> N;

		cout << dp[N] << '\n';
	}

	return 0;
}