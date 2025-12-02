#include <string>
#include <vector>
#include <cmath>

using namespace std;

string reverse(int n)
{
	string result;
	string temp = to_string(n);

	for (int i = 0; i < temp.size(); ++i)
	{
		result += temp[temp.size() - 1 - i];
	}

	return result;
}

int solution(int storey)
{
	int answer = 0;	

	for (int i = 0; i < to_string(storey).size(); ++i)
	{
		string rs = reverse(storey);
		int cnt = rs[i] - '0';

		if (cnt < 5)
		{
			answer += cnt;
			storey -= cnt * static_cast<int>(pow(10, i));
		}
		else if (cnt > 5)
		{
			answer += 10 - cnt;
			storey += (10 - cnt) * static_cast<int>(pow(10, i));
		}
		else if (cnt == 5)
		{
			if (i + 1 < rs.size())
			{
				if (rs[i + 1] - '0' >= 5)
				{
					answer += 10 - cnt;
					storey += (10 - cnt) * static_cast<int>(pow(10, i));
				}
				else
				{
					answer += cnt;
					storey -= cnt * static_cast<int>(pow(10, i));
				}
			}
			else
			{
				answer += cnt;
				storey -= cnt * static_cast<int>(pow(10, i));
			}
		}
	}

	return answer;
}