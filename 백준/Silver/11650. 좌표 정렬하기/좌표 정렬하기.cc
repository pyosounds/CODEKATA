#include <bits/stdc++.h>
using namespace std;

int N;

struct P
{
	int x;
	int y;
};

bool Compare(const P& c1, const P& c2)
{
	if (c1.x == c2.x)
	{
		return c1.y < c2.y;
	}
	else
	{
		return c1.x < c2.x;
	}
}

P* arr = new P[100001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i].x >> arr[i].y;
	}

	sort(arr, arr + N, Compare);

	for (int i = 0; i < N; ++i)
	{
		cout << arr[i].x << " " << arr[i].y << '\n';
	}
	
	delete[] arr;

	return 0;
}