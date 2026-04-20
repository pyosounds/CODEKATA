#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	if (1 == n || 0 == n)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	cout << factorial(N) / (factorial(K) * factorial(N - K));

	return 0;
}