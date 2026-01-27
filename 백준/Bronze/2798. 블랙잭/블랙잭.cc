#include <bits/stdc++.h>
using namespace std;

int arr[101];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N, greater<>());

	int Min = INT_MAX;
	int Sum = 0;

	for (int i = 0; i < N - 2; ++i)
	{
		for (int j = i + 1; j < N - 1; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				int temp = arr[i] + arr[j] + arr[k];

				if (temp <= M && M - temp < Min)
				{
					Sum = temp;
					Min = M - temp;
					continue;
				}
			}
		}
	}

	cout << Sum << '\n';

	return 0;
}