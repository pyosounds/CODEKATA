#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

using namespace std;

int answer;
unordered_set<int> us;

bool isprime(int n)
{
	if (n == 0 || n == 1)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int solution(string numbers)
{
	sort(numbers.begin(), numbers.end());

	do
	{
		for (int i = 0; i < numbers.size(); ++i)
		{
			string str;

			for (int j = 0; j <= i; ++j)
			{
				str += numbers[j];
			}

			int n = stoi(str);

			if (isprime(n) && us.find(n) == us.end())
			{
				++answer;
				us.insert(n);
			}
		}
	} while (next_permutation(numbers.begin(), numbers.end()));

	return answer;
}