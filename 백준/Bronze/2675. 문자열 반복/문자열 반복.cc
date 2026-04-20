#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int T;
	cin >> T;

	while (T--)
	{
		int R;
		string S;
		cin >> R >> S;

		int loop = S.size();

		for (int i = 0; i < loop; ++i)
		{
			for (int j = 0; j < R; ++j)
			{
				cout << S[i];
			}
		}

		cout << '\n';
	}

	return 0;
}