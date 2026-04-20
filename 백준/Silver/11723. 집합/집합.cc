#include <bits/stdc++.h>
using namespace std;

bool S[21];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int M;
	cin >> M;

	string com;
	int x = 0;

	while (M--)
	{
		cin >> com;

		if ("add" == com)
		{
			cin >> x;

			S[x] = 1;
		}
		else if ("remove" == com)
		{
			cin >> x;

			S[x] = 0;
		}
		else if ("check" == com)
		{
			cin >> x;

			if (1 == S[x])
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else if ("toggle" == com)
		{
			cin >> x;

			if (0 == S[x])
			{
				S[x] = 1;
			}
			else if (1 == S[x])
			{
				S[x] = 0;
			}
		}
		else if ("all" == com)
		{
			for (int i = 1; i <= 20; ++i)
			{
				S[i] = 1;
			}
		}
		else if ("empty" == com)
		{
			for (int i = 1; i <= 20; ++i)
			{
				S[i] = 0;
			}
		}
	}

	return 0;
}