#include <string>
#include <vector>

using namespace std;

int dp[60001] = { 0, 1, 2, };

int solution(int n)
{
	for (int i = 3; i <= n; ++i)
	{
		long long temp = static_cast<long long>(dp[i - 1] + dp[i - 2]) % 1000000007;

		dp[i] = temp;
	}

	return dp[n];
}