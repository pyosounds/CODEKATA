#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		stack<char> S;

		string str;
		getline(cin, str);

		if (str == ".")
		{
			break;
		}

		bool Check = true;

		for (const auto& e : str)
		{
			if (e == '(' || e == '[')
			{
				S.push(e);
			}
			else if (e == ')')
			{
				if (S.empty() || S.top() != '(')
				{
					Check = false;
					break;
				}

				S.pop();
			}
			else if (e == ']')
			{
				if (S.empty() || S.top() != '[')
				{
					Check = false;
					break;
				}

				S.pop();
			}
		}

		if (S.empty() && Check)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}

	return 0;
}