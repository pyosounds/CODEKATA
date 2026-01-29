#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	int Check = 0;

	for (int i = 1; i <= N; ++i)
	{
		int Sum = i;
		string s = to_string(i);

		for (int j = 0; j < s.size(); ++j)
		{
			Sum += s[j] - '0';
		}

		if (Sum == N)
		{
			Check = i;
			break;
		}
	}

	cout << Check << '\n';

	return 0;
}