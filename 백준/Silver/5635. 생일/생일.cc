#include <bits/stdc++.h>
using namespace std;

struct Student
{
	string name;
	int d;
	int m;
	int y;
};

bool Compare(const Student& c1, const Student& c2)
{
	if (c1.y == c2.y)
	{
		if (c1.m == c2.m)
		{
			return c1.d < c2.d;
		}
		else
		{
			return c1.m < c2.m;
		}
	}
	else
	{
		return c1.y < c2.y;
	}
}

Student* arr = new Student[101];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i].name >> arr[i].d >> arr[i].m >> arr[i].y;
	}

	sort(arr, arr + n, Compare);

	cout << arr[n - 1].name << '\n';
	cout << arr[0].name << '\n';

	delete[] arr;

	return 0;
}