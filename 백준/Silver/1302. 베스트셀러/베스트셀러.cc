#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> Map;
vector<string> arr;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;

	int Max = 0;

	for (int i = 0; i < N; ++i)
	{
		string str;
		cin >> str;

		if (Map.find(str) == Map.end())
		{
			Map.insert({ str, 1 });
		}
		else
		{
			Map[str] += 1;
		}

		if (Map[str] > Max)
		{
			Max = Map[str];
		}
	}

	for (const auto& e : Map)
	{
		if (e.second == Max)
		{
			arr.push_back(e.first);
		}
	}

	sort(arr.begin(), arr.end());

	cout << arr[0];

	return 0;
}