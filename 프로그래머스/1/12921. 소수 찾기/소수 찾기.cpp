#include <string>
#include <vector>

using namespace std;

int arr[1000001] = { 0, 1, };

int solution(int n)
{
	int answer = 0;

	for (int i = 2; i <= n; ++i)
	{
		if (arr[i])
		{
			continue;
		}

		for (int j = i + i; j <= n; j += i)
		{
			arr[j] = 1;
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		if (!arr[i])
		{
			++answer;
		}
	}

	return answer;
}