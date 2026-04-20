#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int H, M;
	cin >> H >> M;

	bool Check = true;

	if (M < 45)
	{
		Check = false;
	}

	if (Check)
	{
		cout << H << ' ' << M - 45;
	}
	else
	{
		if (0 == H)
		{
			cout << 23 << ' ' << 60 + (M - 45);
		}
		else
		{
			cout << H - 1 << ' ' << 60 + (M - 45);
		}
	}

	return 0;
}