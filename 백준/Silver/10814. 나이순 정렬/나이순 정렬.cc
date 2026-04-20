#include <bits/stdc++.h>
using namespace std;

int N;

struct Info
{
	string name;
	int age;
	int order;
};

bool Compare(const Info& c1, const Info& c2)
{
	if (c1.age != c2.age)
	{
		return c1.age < c2.age;
	}
	else
	{
		return c1.order < c2.order;
	}
}

Info* arr = new Info[100001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i].age >> arr[i].name;
		arr[i].order = i;
	}

	sort(arr, arr + N, Compare);

	for (int i = 0; i < N; ++i)
	{
		cout << arr[i].age << ' ' << arr[i].name << '\n';
	}

	delete[] arr;

	return 0;
}