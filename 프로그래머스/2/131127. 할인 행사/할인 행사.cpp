#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<string, int> um;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
	int answer = 0;

	for (int i = 0; i < want.size(); ++i)
	{
		um.insert({ want[i], number[i] });
	}

	for (int i = 0; i < discount.size() - want.size(); ++i)
	{
		bool maincheck = true;

		for (int j = 0; j < want.size(); ++j)
		{
			int cnt = um[want[j]];			

			for (int k = i; k < i + 10; ++k)
			{
				if (discount[k] == want[j])
				{
					--cnt;

					if (cnt <= 0)
					{
						break;
					}
				}
			}

			if (cnt > 0)
			{
				maincheck = false;
				break;
			}
		}

		if (maincheck)
		{
			++answer;			
		}
		else
		{
			continue;
		}
	}

	return answer;
}