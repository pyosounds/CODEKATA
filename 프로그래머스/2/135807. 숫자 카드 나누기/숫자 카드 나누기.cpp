#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

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

int NGCD(const vector<int>& arr)
{
	int result = arr[0];

	for (int i = 1; i < arr.size(); ++i)
	{
		result = GCD(result, arr[i]);

		if (result == 1)
		{
			break;
		}
	}

	return result;
}

vector<int> divisor(int n)
{
	vector<int> result;

	double s = sqrt(n);

	if (s * s == n)
	{
		for (int i = 1; i < sqrt(n); ++i)
		{
			if (n % i == 0)
			{
				result.push_back(i);
				result.push_back(n / i);
			}
		}

		result.push_back(sqrt(n));
	}
	else
	{
		for (int i = 1; i <= sqrt(n); ++i)
		{
			if (n % i == 0)
			{
				result.push_back(i);
				result.push_back(n / i);
			}
		}
	}

	sort(result.begin(), result.end());

	return result;
}

int solve(int gcd, const vector<int>& arr)
{
	int result = 0;

	vector<int> div = divisor(gcd);

	for (int i = 0; i < div.size(); ++i)
	{
		bool check = true;

		for (const auto& e : arr)
		{
			if (e % div[i] == 0)
			{
				check = false;
				break;
			}
		}

		if (check)
		{
			result = div[i];
		}
	}

	return result;
}

int solution(vector<int> arrayA, vector<int> arrayB)
{
	int answer = 0;

	answer = max(solve(NGCD(arrayA), arrayB), solve(NGCD(arrayB), arrayA));

	return answer;
}