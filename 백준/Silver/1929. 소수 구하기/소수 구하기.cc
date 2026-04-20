#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[10000001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	arr[1] = 1;

	for (int i = 2; i <= 1000000; ++i)
	{
		for (int j = i + i; j <= 1000000; j += i)
		{
			if (1 == arr[j])
				continue;

			arr[j] = 1;
		}
	}
	
	cin >> M >> N;

	for (int i = M; i <= N; ++i)
	{
		if (0 == arr[i])
		{
			cout << i << '\n';
		}
	}

	return 0;
}