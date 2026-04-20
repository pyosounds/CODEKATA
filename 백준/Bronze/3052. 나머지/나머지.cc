#include <bits/stdc++.h>
using namespace std;

set<int> arr;
int n;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	for (int i = 0; i < 10; ++i)
	{
		cin >> n;

		arr.insert(n % 42);
	}

	cout << arr.size();

	return 0;
}