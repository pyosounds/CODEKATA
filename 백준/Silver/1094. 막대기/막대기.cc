#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int X;
	cin >> X;
		
	int Count = 0;
	while (X)
	{
		if (1 == X % 2)
		{
			++Count;
		}

		X /= 2;
	}

	cout << Count;

	return 0;
}