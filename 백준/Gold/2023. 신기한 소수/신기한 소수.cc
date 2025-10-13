#include <bits/stdc++.h>
using namespace std;

int N;
int arr[4] = { 1, 3, 7, 9 };

bool IsPrime(int n)
{
	if (n == 1)
	{
		return false;
	}

	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		return true;
	}

	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

void DFS(int n, int j)
{
	if (j == N)
	{
		if (IsPrime(n))
		{
			cout << n << '\n';
		}

		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		if (IsPrime(n * 10 + arr[i]))
		{
			DFS(n * 10 + arr[i], j + 1);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);

	return 0;
}