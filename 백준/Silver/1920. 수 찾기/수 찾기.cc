#include <bits/stdc++.h>
using namespace std;

set<int> s;
int N, M;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	while (N--)
	{
		int num;
		cin >> num;

		s.insert(num);
	}

	cin >> M;

	while (M--)
	{
		int num;
		cin >> num;

		if (s.end() == s.find(num))
		{
			cout << 0 << '\n';
		}
		else
		{
			cout << 1 << '\n';
		}
	}

	return 0;
}