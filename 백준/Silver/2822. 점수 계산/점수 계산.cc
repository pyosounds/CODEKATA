#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> arr;
vector<int> result;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 8; ++i)
	{
		int score;
		cin >> score;

		arr.push_back({ score, i + 1 });
	}

	sort(arr.begin(), arr.end(), greater<>());

	int Sum = 0;

	for (int i = 0; i < 5; ++i)
	{
		Sum += arr[i].first;
		result.push_back(arr[i].second);
	}

	sort(result.begin(), result.end());

	cout << Sum << '\n';

	for (int i = 0; i < 5; ++i)
	{
		cout << result[i] << " ";
	}

	return 0;
}