#include <string>
#include <vector>
#include <stack>

using namespace std;

stack<char> s;

string reverse(stack<char>& s)
{
	string result, temp;
	int loop = s.size();

	for (int i = 0; i < loop; ++i)
	{
		temp += s.top();
		s.pop();
	}

	for (int i = 0; i < temp.size(); ++i)
	{
		result += temp[temp.size() - 1 - i];
	}

	return result;
}

string solution(string number, int k)
{
	string answer = "";

	s.push(number[0]);

	for (int i = 1; i < number.size(); ++i)
	{
		if (!s.empty())
		{
			while (number[i] > s.top() && k > 0)
			{
				s.pop();
				--k;

				if (s.empty())
				{
					break;
				}
			}
		}

		s.push(number[i]);
	}

	for (int i = 0; i < k; ++i)
	{
		s.pop();
	}

	answer = reverse(s);

	return answer;
}