#include <bits/stdc++.h>
using namespace std;

int N;
string S, T;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		
	cin >> N >> S >> T;

	int Count = 0;

	for (int i = 0; i < N; ++i)
	{
		if (S[i] != T[i])
		{
			++Count;
		}
	}

	cout << Count;

	return 0;
}