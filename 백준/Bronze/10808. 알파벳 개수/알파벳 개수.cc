#include <bits/stdc++.h>
using namespace std;

int arr[26];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string S;
	cin >> S;

	int loop = S.size();

	for (int i = 0; i < loop; ++i)
	{
		++arr[S[i] - 97];
	}

	for (int i = 0; i < 26; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}