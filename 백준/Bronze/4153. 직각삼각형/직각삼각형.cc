#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if (!a && !b && !c)
			break;

		int arr[3] = { a, b, c };
		sort(arr, arr + 3);

		if ((int)pow(arr[2], 2) == (int)pow(arr[0], 2) + (int)pow(arr[1], 2))
		{
			cout << "right\n";
		}
		else
		{
			cout << "wrong\n";
		}
	}

	return 0;
}