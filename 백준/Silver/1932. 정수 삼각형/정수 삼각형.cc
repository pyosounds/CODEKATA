#include <bits/stdc++.h>
using namespace std;

int arr[501][501];
int dp[501][501];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
		}
	}

	int Max = -1;

	for (int i = 1; i <= n; ++i)
	{
		if (dp[n][i] > Max)
		{
			Max = dp[n][i];
		}
	}

	cout << Max << '\n';

	return 0;
}