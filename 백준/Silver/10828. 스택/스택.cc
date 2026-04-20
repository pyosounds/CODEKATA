#include <bits/stdc++.h>
using namespace std;

vector<int> Stack;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;

	while (N--)
	{
		string order;
		cin >> order;

		if ("push" == order)
		{
			int num;
			cin >> num;

			Stack.push_back(num);
		}
		else if ("pop" == order)
		{
			if (0 == Stack.size())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << Stack[Stack.size() - 1] << '\n';
				Stack.pop_back();
			}
		}
		else if ("size" == order)
		{
			cout << Stack.size() << '\n';
		}
		else if ("empty" == order)
		{
			if (0 == Stack.size())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else if ("top" == order)
		{
			if (0 == Stack.size())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << Stack[Stack.size() - 1] << '\n';
			}
		}
	}

	return 0;
}