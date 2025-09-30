#include <bits/stdc++.h>
using namespace std;

unordered_set<string> s;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		string str;
		cin >> str;

		s.insert(str);
	}

	int cnt = 0;

	for (int i = 0; i < M; ++i)
	{
		string str;
		cin >> str;

		if (s.find(str) != s.end())
		{
			++cnt;
		}
	}

	cout << cnt;

	return 0;
}