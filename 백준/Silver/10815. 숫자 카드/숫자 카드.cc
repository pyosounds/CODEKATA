#include <bits/stdc++.h>
using namespace std;

int N, M;
unordered_set<int> s;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;

		s.insert(num);
	}

	cin >> M;
	
	for (int i = 0; i < M; ++i)
	{
		int num;
		cin >> num;
				
		if (s.find(num) != s.end())
		{
			cout << 1 << ' ';
		}
		else
		{
			cout << 0 << ' ';
		}
	}

	return 0;
}