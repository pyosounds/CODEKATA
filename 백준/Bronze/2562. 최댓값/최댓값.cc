#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int Max = 0;
	int idx = 0;

	for (int i = 0; i < 9; ++i)
	{
		int num;
		cin >> num;

		if (num > Max)
		{
			Max = num;
			idx = i + 1;
		}
	}

	cout << Max << '\n' << idx;

	return 0;
}