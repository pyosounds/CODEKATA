#include <bits/stdc++.h>
using namespace std;

vector<int> inputarr;
int arr[9];
bool IsUsed[9];
int N, M;

void solve(int n, int k)
{
	if (k == M)
	{
		for (int i = 0; i < k; ++i)
		{
			cout << arr[i] << ' ';
		}

		cout << '\n';
		return;
	}

	for (int i = n; i <= N; ++i)
	{
		arr[k] = inputarr[i - 1];
		IsUsed[i] = true;
		solve(i, k + 1);
		IsUsed[i] = false;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;

		inputarr.push_back(num);
	}

	sort(inputarr.begin(), inputarr.end());

	solve(1, 0);

	return 0;
}