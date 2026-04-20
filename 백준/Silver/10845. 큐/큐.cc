#include <bits/stdc++.h>
using namespace std;

list<int> Q;

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

			Q.push_back(num);
		}
		else if ("pop" == order)
		{
			if (0 == Q.size())
			{
				cout << -1 << '\n';
			}
			else
			{
				list<int>::iterator iter = Q.begin();
				cout << *iter << '\n';

				Q.pop_front();
			}
		}
		else if ("size" == order)
		{
			cout << Q.size() << '\n';
		}
		else if ("empty" == order)
		{
			if (0 == Q.size())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else if ("front" == order)
		{
			if (0 == Q.size())
			{
				cout << -1 << '\n';
			}
			else
			{
				list<int>::iterator iter = Q.begin();
				cout << *iter << '\n';
			}
		}
		else if ("back" == order)
		{
			if (0 == Q.size())
			{
				cout << -1 << '\n';
			}
			else
			{
				list<int>::iterator iter = Q.end();
				cout << *(--iter) << '\n';
			}
		}
	}

	return 0;
}