#include <bits/stdc++.h>
using namespace std;

deque<int> deq;

void solution(int N)
{
	for (int i = 0; i < N; ++i)
	{
		int com;
		cin >> com;

		switch (com)
		{
		case 1:
		{
			int X;
			cin >> X;
			deq.push_front(X);			
		}			
			break;

		case 2:
		{
			int X;
			cin >> X;
			deq.push_back(X);
		}
			break;

		case 3:
			if (!deq.empty())
			{
				cout << deq.front() << '\n';
				deq.pop_front();
			}
			else
			{
				cout << -1 << '\n';
			}

			break;

		case 4:
			if (!deq.empty())
			{
				cout << deq.back() << '\n';
				deq.pop_back();
			}
			else
			{
				cout << -1 << '\n';
			}

			break;

		case 5:
			cout << deq.size() << '\n';

			break;

		case 6:
			if (deq.empty())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}

			break;

		case 7:
			if (!deq.empty())
			{
				cout << deq.front() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}

			break;

		case 8:
			if (!deq.empty())
			{
				cout << deq.back() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}

			break;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;

	solution(N);
    
	return 0;
}