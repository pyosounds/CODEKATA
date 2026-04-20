#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;

	int num;
	cin >> num;

	int Min = num;
	int Max = num;

	for (int i = 1; i < N; ++i)
	{
		cin >> num;
		if (num < Min)
		{
			Min = num;
		}
		if (num > Max)
		{
			Max = num;
		}
	}

	cout << Min << " " << Max;

	return 0;
}