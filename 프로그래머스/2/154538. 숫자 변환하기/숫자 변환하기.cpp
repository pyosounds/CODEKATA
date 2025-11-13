#include <string>
#include <vector>
#include <limits>

using namespace std;

int dp[1000001];

int solution(int x, int y, int n)
{
	int answer = 0;
	int Max = numeric_limits<int>::max();

	for (int i = x + 1; i <= y; ++i)
	{
		dp[i] = Max;
	}

	for (int i = x; i <= y; ++i)
	{
		if (dp[i] == Max)
		{
			continue;
		}

		if (i + n <= y)
		{
			dp[i + n] = min(dp[i + n], dp[i] + 1);
		}
		if (i * 2 <= y)
		{
			dp[i * 2] = min(dp[i * 2], dp[i] + 1);
		}
		if (i * 3 <= y)
		{
			dp[i * 3] = min(dp[i * 3], dp[i] + 1);
		}
	}

	if (dp[y] == Max)
	{
		answer = -1;
	}
	else
	{
		answer = dp[y];
	}

	return answer;
}