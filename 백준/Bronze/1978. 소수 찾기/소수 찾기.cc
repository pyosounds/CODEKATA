#include <bits/stdc++.h>
using namespace std;

char arr[1001];
int N;

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	arr[1] = 1;

	for (int i = 2; i <= 1000; ++i)
	{
		if (1 == arr[i])
		{
			continue;
		}
		
		for (int j = i + i; j <= 1000; j += i)
		{
			arr[j] = 1;
		}
	}
	
	int Count = 0;
	while (N--)
	{
		int num;
		cin >> num;

		if (0 == arr[num])
		{
			++Count;
		}
	}

	cout << Count;

	return 0;
}