#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	string result;
	
	for (int i = 0; i < s.size(); ++i)
	{
		if (65 <= s[i] && s[i] <= 90)
		{
			result += s[i];
		}
	}

	cout << result;

	return 0;
}