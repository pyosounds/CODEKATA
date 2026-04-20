#include <bits/stdc++.h>
using namespace std;

int arr[26];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	fill(arr, arr + 26, -1);

	string S;
	cin >> S;

	int loop = S.size();

	for (int i = 0; i < loop; ++i)
	{
		if (arr[S[i] - 'a'] >= 0)
		{
			continue;
		}

		arr[S[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; ++i)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}