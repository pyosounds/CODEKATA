#include <bits/stdc++.h>
using namespace std;

int arr[10];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int A, B, C;
	cin >> A >> B >> C;

	string result = to_string(A * B * C);

	int loop = result.size();

	for (int i = 0; i < loop; ++i)
	{
		++arr[result[i] - '0'];
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}