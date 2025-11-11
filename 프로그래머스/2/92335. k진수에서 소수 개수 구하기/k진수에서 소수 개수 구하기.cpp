#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isprime(long long num)
{
	if (num == 1)
	{
		return false;
	}

	bool check = true;

	for (long long i = 2; i <= sqrt(num); ++i)
	{
		if (num % i == 0)
		{
			check = false;
			break;
		}
	}

	return check;
}

string transformnum(int num, int k)
{
	string result;
	string temp;

	while (num > 0)
	{
		temp += to_string(num % k);
		num /= k;
	}

	for (int i = 0; i < temp.size(); ++i)
	{
		result += temp[temp.size() - 1 - i];
	}

	return result;
}

vector<long long> split(string str)
{
	vector<long long> result;

	string temp;

	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == '0')
		{
			if (temp.empty())
			{
				continue;
			}

			result.push_back(stoll(temp));
			temp = "";
		}
		else
		{
			temp += str[i];
		}
	}

	if (!temp.empty())
	{
		result.push_back(stoll(temp));
	}

	return result;
}

int solution(int n, int k)
{
	int answer = 0;

	string str = transformnum(n, k);
	vector<long long> arr = split(str);

	for (int i = 0; i < arr.size(); ++i)
	{
		if (isprime(arr[i]))			
		{
			++answer;
		}
	}

	return answer;
}