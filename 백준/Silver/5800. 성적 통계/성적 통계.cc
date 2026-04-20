#include <bits/stdc++.h>
using namespace std;

int arr[51];
int K, N;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		
	cin >> K;

	for (int i = 0; i < K; ++i)
	{
		cin >> N;
		
		for (int j = 0; j < N; ++j)
		{
			cin >> arr[j];
		}

		sort(arr, arr + N, greater<>());

		int MaxGap = 0;

		for (int j = 0; j < N - 1; ++j)
		{
			if (arr[j] - arr[j + 1] > MaxGap)
			{
				MaxGap = arr[j] - arr[j + 1];
			}
		}

		cout << "Class " << i + 1 << '\n';
		cout << "Max " << arr[0] << ", Min " << arr[N - 1] << ", Largest gap " << MaxGap << '\n';
	}

	return 0;
}