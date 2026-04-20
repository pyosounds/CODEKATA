#include <bits/stdc++.h>
using namespace std;

deque<int> D;
int N;

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	while (N--)
	{
		string com;
		cin >> com;

		if ("push_front" == com)
		{
			int X;
			cin >> X;

			D.push_front(X);
		}
		else if ("push_back" == com)
		{
			int X;
			cin >> X;

			D.push_back(X);
		}
		else if ("pop_front" == com)
		{
			if (0 == D.size())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << D.front() << '\n';
				D.pop_front();
			}
		}
		else if ("pop_back" == com)
		{
			if (0 == D.size())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << D.back() << '\n';
				D.pop_back();
			}
		}
		else if ("size" == com)
		{
			cout << D.size() << '\n';
		}
		else if ("empty" == com)
		{
			if (0 == D.size())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else if ("front" == com)
		{
			if (0 == D.size())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << D.front() << '\n';
			}
		}
		else if ("back" == com)
		{
			if (0 == D.size())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << D.back() << '\n';
			}
		}
	}
	
	return 0;
}