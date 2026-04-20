#include <bits/stdc++.h>
using namespace std;

int arr[202];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		
	int N;
	cin >> N;

	while (N--)
	{
		int num;
		cin >> num;

		++arr[num + 100];
	}

	int v;
	cin >> v;

	cout << arr[v + 100];

	return 0;
}