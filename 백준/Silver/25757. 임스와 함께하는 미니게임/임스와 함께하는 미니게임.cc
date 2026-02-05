#include <bits/stdc++.h>
using namespace std;

set<string> s;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	char Game;
	cin >> N >> Game;

	while (N--)
	{
		string name;
		cin >> name;

		s.insert(name);
	}

	int cnt = 0;	

	if (Game == 'Y')
	{
		cnt = s.size() / 1;
	}
	else if (Game == 'F')
	{
		cnt = s.size() / 2;
	}
	else if (Game == 'O')
	{
		cnt = s.size() / 3;
	}

	cout << cnt << '\n';

	return 0;
}