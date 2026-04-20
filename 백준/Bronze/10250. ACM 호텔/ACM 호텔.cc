#include <bits/stdc++.h>
using namespace std;

int T;
int H, W, N;

void solve(int H, int W, int N)
{
	// 층
	if (0 == N % H)
	{
		cout << H;
	}
	else
	{
		cout << N % H;
	}

	// 호
	if (N / H < 9)
	{
		if (0 == N % H)
		{
			cout << 0 << N / H;
		}
		else
		{
			cout << 0 << N / H + 1;
		}
	}
	else if (N / H == 9)
	{
		if (0 == N % H)
		{
			cout << 0 << N / H;
		}
		else
		{
			cout << N / H + 1;
		}
	}
	else
	{
		if (0 == N % H)
		{
			cout << N / H;
		}
		else
		{
			cout << N / H + 1;
		}
	}

	cout << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> T;
	
	for (int i = 0; i < T; ++i)
	{
		cin >> H >> W >> N;
	
		solve(H, W, N);
	}

	return 0;
}