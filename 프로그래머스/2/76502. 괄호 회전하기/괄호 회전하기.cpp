#include <string>
#include <vector>
#include <deque>
#include <stack>

using namespace std;

int solution(string s)
{
	int answer = 0;	

	for (int i = 0; i < s.size(); ++i)
	{
		stack<char> st;
		deque<char> dq;

		for (int j = 0; j < s.size(); ++j)
		{
			dq.push_back(s[j]);
		}

		for (int j = 0; j < i; ++j)
		{
			dq.push_back(dq.front());
			dq.pop_front();
		}

		bool check = false;

		for (int j = 0; j < dq.size(); ++j)
		{
			if (!st.empty())
			{
				if (dq[j] == ')')
				{
					if (st.top() != '(')
					{
						check = true;
						break;
					}
					else
					{
						st.pop();
					}
				}
				else if (dq[j] == '}')
				{
					if (st.top() != '{')
					{
						check = true;
						break;
					}
					else
					{
						st.pop();
					}
				}
				else if (dq[j] == ']')
				{
					if (st.top() != '[')
					{
						check = true;
						break;
					}
					else
					{
						st.pop();
					}
				}
				else
				{
					st.push(dq[j]);
				}
			}
			else
			{
				if (dq[j] == ')' || dq[j] == '}' || dq[j] == ']')
				{
					check = true;
					break;
				}

				st.push(dq[j]);
			}
		}

		if (st.empty() && !check)
		{
			++answer;
		}
	}	

	return answer;
}