#include <bits/stdc++.h>
using namespace std;

stack<char> S;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string str;
	cin >> str;

	int cnt = 0;

	for (int i = 0; i < str.size() - 1; ++i)
	{
		if (str[i] == '(')
		{
			S.push('(');

			if (str[i + 1] == ')')
			{
				S.pop();
				cnt += S.size();
				i += 1;
				continue;
			}
		}
		else if (str[i] == ')')
		{
			S.pop();
			cnt += 1;
		}
	}

	if (!S.empty())
	{
		cnt += 1;
	}

	cout << cnt;

	return 0;
}