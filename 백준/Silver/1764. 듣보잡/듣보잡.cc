#include <bits/stdc++.h>
using namespace std;

vector<string> result;
set<string> S;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N, M;
	cin >> N >> M;

	while (N--)
	{
		string name;
		cin >> name;

		S.insert(name);
	}

	int Count = 0;
	while (M--)
	{
		string name;
		cin >> name;

		if (S.find(name) != S.end())
		{			
			result.push_back(name);
			++Count;
		}
	}

	cout << Count << '\n';
	
	sort(result.begin(), result.end());

	int loop = result.size();
	for (int i = 0; i < loop; ++i)
	{
		cout << result[i] << '\n';
	}

	return 0;
}