#include <bits/stdc++.h>
using namespace std;

int N;
queue<int> Q;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		Q.push(i);
	}

	while (1 != Q.size())
	{
		// 제일 위에 있는 카드를 바닥에 버린다.
		Q.pop();		

		// 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다.
		Q.push(Q.front());
		Q.pop();
		if (1 == Q.size()) break;
	}

	cout << Q.front();

	return 0;
}