#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;

	string num;
	cin >> num;

	int Sum = 0;
	for (int i = 0; i < N; ++i)
	{
		Sum += num[i] - '0';
	}

	cout << Sum;

	return 0;
}