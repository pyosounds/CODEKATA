#include <bits/stdc++.h>
using namespace std;

int N, k, x;
int arr[1001];

bool Compare(const int& c1, const int& c2)
{
	return c1 > c2;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N >> k;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N, Compare);

	cout << arr[k - 1];

	return 0;
}