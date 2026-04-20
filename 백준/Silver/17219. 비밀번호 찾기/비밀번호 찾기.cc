#include <bits/stdc++.h>
using namespace std;

map<string, string> Info;
string add, pw;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N, M;
	cin >> N >> M;

	while (N--)
	{		
		cin >> add >> pw;

		Info.insert({ add, pw });
	}

	while (M--)
	{
		cin >> add;

		cout << Info.find(add)->second << '\n';
	}

	return 0;
}