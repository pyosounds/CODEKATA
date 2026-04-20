#include <bits/stdc++.h>
using namespace std;

int N;
int arr[10001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;

	int num;
	for (int i = 0; i < N; ++i)
	{		
		cin >> num;

		++arr[num];
	}

	for (int i = 1; i <= 10000; ++i)
	{
		if (0 == arr[i])
			continue;

		for (int j = 0; j < arr[i]; ++j)
		{
			cout << i << '\n';
		}
	}
	
	return 0;
}