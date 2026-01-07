#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int T;
	cin >> T;

	while (T--)
	{
		string str;
		cin >> str;

		int loop = str.size();
		bool good = true;
		stack<char> S;

		for (int i = 0; i < loop; ++i)
		{
			if ('(' == str[i])
			{
				S.push('(');
			}
			else if (')' == str[i])
			{
				if (!S.size())
				{
					good = false;
					break;
				}
				else
				{
					S.pop();
				}
			}
		}

		if (good && !S.size())
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	
	return 0;
}