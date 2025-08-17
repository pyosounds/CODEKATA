#include <bits/stdc++.h>
using namespace std;

int arr[7];
int Count;
int last;
int two;

int main()
{
	for (int i = 0; i < 3; ++i)
	{
		int n;
		cin >> n;

		++arr[n];
	}

	for (int i = 1; i <= 6; ++i)
	{
		if (arr[i])
		{
			++Count;
			last = i;

			if (arr[i] == 2)
			{
				two = i;
			}
		}
	}
	
	if (Count == 1)
	{
		cout << 10000 + (last * 1000);
	}
	else if (Count == 2)
	{
		cout << 1000 + (two * 100);
	}
	else if (Count == 3)
	{
		cout << last * 100;
	}

	return 0;
}