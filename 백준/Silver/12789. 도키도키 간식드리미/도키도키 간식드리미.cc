#include <bits/stdc++.h>
using namespace std;

queue<int> Q;
stack<int> S;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;

		Q.push(num);
	}

	string result = "Nice";
	int check = 1;

	while (!Q.empty())
	{
		if (check == Q.front())
		{
			Q.pop();
			++check;
		}
		else
		{
			if (!S.empty() && check == S.top())
			{
				S.pop();
				++check;
			}
			else
			{
				S.push(Q.front());
				Q.pop();
			}
		}
	}

	for (int i = 0; i < S.size(); ++i)
	{
		if (check == S.top())
		{
			S.pop();
			++check;
		}
		else
		{
			result = "Sad";
			break;
		}
	}

	cout << result;

	return 0;
}