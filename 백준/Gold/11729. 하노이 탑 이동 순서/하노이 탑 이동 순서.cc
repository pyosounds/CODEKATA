#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int n)
{
	if (n == 1)
	{
		cout << a << ' ' << b << '\n';
		return;
	}

	solve(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << '\n';
	solve(6 - a - b, b, n - 1);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	int result = static_cast<int>(pow(2, N)) - 1;

	cout << result << '\n';

	solve(1, 3, N);

	return 0;
}