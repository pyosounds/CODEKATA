#include <bits/stdc++.h>
using namespace std;

int arr[1001][3];
int dp[1001][3];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (j == 0)
			{
				dp[i][j] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][j];
			}
			else if (j == 1)
			{
				dp[i][j] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][j];
			}
			else if (j == 2)
			{
				dp[i][j] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][j];
			}
		}
	}

	int result = min(min(dp[N][0], dp[N][1]), dp[N][2]);

	cout << result << '\n';

	return 0;
}