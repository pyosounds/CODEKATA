#include <bits/stdc++.h>
using namespace std;

int N, Count;
bool IsUsed1[40];
bool IsUsed2[40];
bool IsUsed3[40];

void NQueen(int C)
{
	if (N == C)
	{
		++Count;
		return;
	}

	for (int i = 0; i < N; ++i)
	{
		if (IsUsed1[i] || IsUsed2[i + C] || IsUsed3[C - i + N - 1])
		{
			continue;
		}

		IsUsed1[i] = true;
		IsUsed2[i + C] = true;
		IsUsed3[C - i + N - 1] = true;

		NQueen(C + 1);

		IsUsed1[i] = false;
		IsUsed2[i + C] = false;
		IsUsed3[C - i + N - 1] = false;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	NQueen(0);

	cout << Count << '\n';

	return 0;
}