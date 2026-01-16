#include <bits/stdc++.h>
using namespace std;

int N, K;
int arr[11];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N, greater<>());

	int cnt = 0;

	for (int i = 0; i < N; ++i)
	{
		if (K >= arr[i])
		{
			cnt += K / arr[i];
			K %= arr[i];
		}
	}

	cout << cnt << '\n';

	return 0;
}