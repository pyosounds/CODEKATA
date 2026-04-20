#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;

	if (0 == N % 4)
	{
		if (0 != N % 100 || 0 == N % 400)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		cout << 0;
	}

	return 0;
}