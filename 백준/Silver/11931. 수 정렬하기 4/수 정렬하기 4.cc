#include <bits/stdc++.h>
using namespace std;

bool arr[2000002];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;

		arr[num + 1000000] = 1;
	}

	for (int i = 2000000; i >= 0; --i)
	{
		if (arr[i])
		{
			cout << i - 1000000 << '\n';
		}
	}

	return 0;
}