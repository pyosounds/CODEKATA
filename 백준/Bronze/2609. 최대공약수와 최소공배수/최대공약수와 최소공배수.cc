#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
	int n;

	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}

	return a;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int A, B;
	cin >> A >> B;

	cout << GCD(A, B) << '\n';
	cout << (A * B) / GCD(A, B) << '\n';

	return 0;
}