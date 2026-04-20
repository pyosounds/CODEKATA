#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	int Sum = 0;

	for (int i = 0; i < N; ++i)
	{
		int C, K;
		cin >> C >> K;

		Sum += C * K;
	}

	cout << Sum;

	return 0;
}