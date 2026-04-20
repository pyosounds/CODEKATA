#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	int Sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		Sum += i;
	}

	cout << Sum;

	return 0;
}