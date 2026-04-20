#include <bits/stdc++.h>
using namespace std;

int T;
string S;

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> T;

	while (T--)
	{
		cin >> S;

		int result = 0;
		int score = 'O' == S[0] ? 1 : 0;
		result += score;

		int loop = S.size();

		for (int i = 1; i < loop; ++i)
		{
			if ('O' == S[i])
			{
				++score;
				result += score;
			}
			else if ('X' == S[i])
			{
				score = 0;
			}
		}

		cout << result << '\n';
	}
	
	return 0;
}