#include <bits/stdc++.h>
using namespace std;

int arr[1001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	int Sum = 0;	
	int last = 0;

	for (int i = 0; i < N; ++i)
	{
		Sum += last + arr[i];
		last += arr[i];
	}

	cout << Sum << '\n';

	return 0;
}