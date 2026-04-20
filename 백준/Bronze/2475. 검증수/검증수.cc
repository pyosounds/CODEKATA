#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int Sum = 0;

	for (int i = 0; i < 5; ++i)
	{
		int n;
		cin >> n;

		Sum += n * n;
	}

	cout << Sum % 10;

	return 0;
}